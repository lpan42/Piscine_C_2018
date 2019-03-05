// Assignment name  : check_mate 
// Expected files   : *.c, *.h
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes rows of a chessboard as arguments and checks if your 
// King is "in check".

// Quick reminder, chess is a game played on a chessboard, an 8 smaller-square long
// square board with specific pieces: King, Queen, Bishop, Knight, Rook and Pawns.
// For this exercice, you will only play with Pawns, Bishops, Rooks, Queens...
// and a King.

// Each piece has specific moves available, and all patterns to capture enemy pieces
// are detailed in the examples.txt file.

// A piece can only capture the first possible piece that stands on its path.

// The board can be of different sizes but will remain a square. There's only one King
// and all other pieces are against it. All the characters that are not used to
// refer to pieces are considered as empty squares.

// The King is considered to be "in check" when an other enemy piece can
// capture it. When it's the case, you will print "Success" on the standard output
// followed by a newline, otherwise you will print "Fail" followed by a newline.

// If there are no arguments, the program will only print a newline.

// Examples:

// $> ./chessmate '..' '.K' | cat -e
// Fail$
// $> ./check_mate 'R...' '.K..' '..P.' '....' | cat -e
// Success$
// $> ./chessmate 'R...' 'iheK' '....' 'jeiR' | cat -e
// Success$
// $> ./chessmate | cat -e
// $
// $>