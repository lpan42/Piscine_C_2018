/*Assignment name  : brainfuck
Expected files   : *.c, *.h
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------
Write a Brainfuck interpreter program.
The source code will be given as first parameter.
The code will always be valid, with no more than 4096 operations.
Brainfuck is a minimalist language. It consists of an array of bytes
(in our case, let's say 2048 bytes) initialized to zero,
and a pointer to its first byte.
Every operator consists of a single character :
- '>' increment the pointer ;
- '<' decrement the pointer ;
- '+' increment the pointed byte ;
- '-' decrement the pointed byte ;
- '.' print the pointed byte on standard output ;
- '[' go to the matching ']' if the pointed byte is 0 (while start) ;
- ']' go to the matching '[' if the pointed byte is not 0 (while end).
Any other character is a comment.
Examples:
$>./brainfuck "++++++++++[>+++++++>++++++++++>+++>+<<<<-]
>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>." | cat -e
Hello World!$
$>./brainfuck "+++++[>++++[>++++H>+++++i<<-]>>>++\n<<<<-]>>--------.>+++++.>." | cat -e
Hi$
$>./brainfuck | cat -e
$
*/
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;
		int check_loop;
		char *str;

		i = 0;
		check_loop = 1;
		str = (char*)malloc(sizeof(char) * (2048 + 1));
		if (str == 0)
			return (0);
		while(i <= 2048)
		{
			str[i] = '\0';
			i++;
		}
		i =0;
		while (argv[1][i])
		{
			if (argv[1][i] == '>')
				str++;
			if (argv[1][i] == '<')
				str--;
			if (argv[1][i] == '+')
				*str = *str + 1;
			if (argv[1][i] == '-')
				*str = *str - 1;
			if (argv[1][i] == '.')
				write (1, str, 1);
			if(argv[1][i] == '[' && !*str)
			{
				check_loop = 1;
				while(check_loop)
				{
					i++;
					if (argv[1][i] == '[')
						check_loop++;
					if (argv[1][i] == ']')
						check_loop--;
				}
			}
			if(argv[1][i] == ']' && *str)
			{
				check_loop = 1;
				while(check_loop)
				{
					i--;
					if (argv[1][i] == '[')
						check_loop--;
					if (argv[1][i] == ']')
						check_loop++;
				}
			}
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
