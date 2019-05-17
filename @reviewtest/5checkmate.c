/*Assignment name  : check_mate 
Expected files   : *.c, *.h
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes rows of a chessboard as arguments and checks if your 
King is "in check".

Quick reminder, chess is a game played on a chessboard, an 8 smaller-square long
square board with specific pieces: King, Queen, Bishop, Knight, Rook and Pawns.
For this exercice, you will only play with Pawns, Bishops, Rooks, Queens...
and a King.

Each piece has specific moves available, and all patterns to capture enemy pieces
are detailed in the examples.txt file.

A piece can only capture the first possible piece that stands on its path.

The board can be of different sizes but will remain a square. There's only one King
and all other pieces are against it. All the characters that are not used to
refer to pieces are considered as empty squares.

The King is considered to be "in check" when an other enemy piece can
capture it. When it's the case, you will print "Success" on the standard output
followed by a newline, otherwise you will print "Fail" followed by a newline.

If there are no arguments, the program will only print a newline.

Examples:

$> ./chessmate '..' '.K' | cat -e
Fail$
$> ./check_mate 'R...' '.K..' '..P.' '....' | cat -e
Success$
$> ./chessmate 'R...' 'iheK' '....' 'jeiR' | cat -e
Success$
$> ./chessmate | cat -e
$
$>
Pion / Pawn (P):

	. . . . . . .
	. . . . . . .
	. . X . X . .
	. . . P . . .
	. . . . . . .
	. . . . . . .
	. . . . . . .

Fou / Bishop (B):

	X . . . . . X
	. X . . . X .
	. . X . X . .
	. . . B . . .
	. . X . X . .
	. X . . . X .
	X . . . . . X

Tour / Rook (R):

	. . . X . . .
	. . . X . . .
	. . . X . . .
	X X X R X X X
	. . . X . . .
	. . . X . . .
	. . . X . . .

Dame / Queen (Q)

	X . . X . . X
	. X . X . X .
	. . X X X . .
	X X X Q X X X
	. . X X X . .
	. X . X . X .
	X . . X . . X 
*/

# include <unistd.h>
# include <stdlib.h>

void			free_board(char **board)
{
	int				j;

	j = -1;
	while (board[++j])
		free(board[j]);
	free(board);
}

int				ft_strlen(char *str)
{
	int				i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

int				check_unique_pieces(char **board)
{
	int				i;
	int				j;
	int				k = 0;
	int				q = 0;

	j = -1;
	while (board[++j])
	{
		i = -1;
		while (board[j][++i])
		{
			if (board[j][i] == 'K')
				k++;
			else if (board[j][i] == 'Q')
				q++;
		}
	}
	if (k != 1 || (q != 0 && q != 1))
		return (0);
	return (1);
}

/*
** nb_args is the precise number of user provided arguments (ac - 1).
** args are the precise args the user entered, without the program name (av + 1).
**
** 2 checks: same length of lines than number of lines. 1 king in the board and max
** 1 queen on the board.
*/

char			**parse_args(int nb_args, char **args)
{
	char			**board;
	int				i;
	int				j;

	if (!(board = (char**)malloc(sizeof(char*) * (nb_args + 1))))
		return (NULL);
	board[nb_args] = 0;

	j = -1;
	while (args[++j])
	{
		if (ft_strlen(args[j]) != nb_args)
			return (NULL);
		if (!(board[j] = (char*)malloc(nb_args + 1)))
			return (NULL);
		i = -1;
		while (args[j][++i])
			board[j][i] = args[j][i];
		board[j][i] = 0;
	}

	if (!check_unique_pieces(board))
		return (NULL);

	return (board);
}

static int		is_attacking_piece(char c)
{
	if (c == 'Q' || c == 'R' || c == 'B' || c == 'P')
		return (1);
	return (0);
}

/*
** First check the line the rock is in, on the left then on the right.
** Then check its column, towards the top then the bottom.
*/

static int		check_rock(char **board, int y, int x, int board_size)
{
	int				j;
	int				i;

	i = x;
	while (--i > -1)
	{
		if (is_attacking_piece(board[y][i]))
			break;
		else if (board[y][i] == 'K')
			return (1);
	}
	i = x;
	while (++i < board_size)
	{
		if (is_attacking_piece(board[y][i]))
			break;
		else if (board[y][i] == 'K')
			return (1);
	}

	j = y;
	while (--j > -1)
	{
		if (is_attacking_piece(board[j][x]))
			break;
		else if (board[j][x] == 'K')
			return (1);
	}
	j = y;
	while (++j < board_size)
	{
		if (is_attacking_piece(board[j][x]))
			break;
		else if (board[j][x] == 'K')
			return (1);
	}

	return (0);
}

static int		check_pawn(char **board, int y, int x, int board_size)
{
	if (y == 0)
		return (0);
	if (x > 0 && board[y - 1][x - 1] == 'K')
		return (1);
	if (x < board_size - 1 && board[y - 1][x + 1] == 'K')
		return (1);
	return (0);
}

/*
** First, check towards the upper-left.
** Second, check towards the bottom-right.
** Third, check towards the upper-right.
** Forth, check towards the bottom-left.
*/

static int		check_bishop(char **board, int y, int x, int board_size)
{
	int				j;
	int				i;

	j = y;
	i = x;
	while (--j > -1 && --i > -1)
	{
		if (is_attacking_piece(board[j][i]))
			break;
		else if (board[j][i] == 'K')
			return (1);
	}

	j = y;
	i = x;
	while (++j < board_size && ++i < board_size)
	{
		if (is_attacking_piece(board[j][i]))
			break;
		else if (board[j][i] == 'K')
			return (1);
	}

	j = y;
	i = x;
	while (--j > -1 && ++i < board_size)
	{
		if (is_attacking_piece(board[j][i]))
			break;
		else if (board[j][i] == 'K')
			return (1);
	}

	j = y;
	i = x;
	while (++j < board_size && --i > -1)
	{
		if (is_attacking_piece(board[j][i]))
			break;
		else if (board[j][i] == 'K')
			return (1);
	}

	return (0);
}

/*
** The queen move pattern is the combination of the one of the rock and
** the bishop. A call to the function of these two pieces makes the tick.
*/

static int		check_queen(char **board, int y, int x, int board_size)
{
	if (check_rock(board, y, x, board_size))
		return (1);
	if (check_bishop(board, y, x, board_size))
		return (1);
	return (0);
}

int				check_pieces(char **board)
{
	int				j;
	int				i;
	int				success = 0;
	int				board_size;

	board_size = ft_strlen(board[0]);
	j = -1;
	while (board[++j])
	{
		i = -1;
		while (board[j][++i])
		{
			if (board[j][i] == 'Q')
				success = check_queen(board, j, i, board_size);
			if (board[j][i] == 'R')
				success = check_rock(board, j, i, board_size);
			if (board[j][i] == 'B')
				success = check_bishop(board, j, i, board_size);
			if (board[j][i] == 'P')
				success = check_pawn(board, j, i, board_size);
			if (success)
				return (1);
		}
	}
	return (0);
}

int				main(int ac, char **av)
{
	char			**board;

	if (ac != 1)
	{
		if (!(board = parse_args(ac - 1, av + 1)))
		{
			write(1, "\n", 1);
			return (0);
		}
		if (check_pieces(board))
			write(1, "Success", 7);
		else
			write(1, "Fail", 4);
		free_board(board);
	}
	write(1, "\n", 1);
	return (0);
}