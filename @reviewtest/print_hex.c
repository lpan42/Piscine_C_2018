#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int a)
{
    char base[16] = "0123456789abcdef";
    if (a < 0)
    {
        ft_putchar('-');
        a = a * (-1);
    }
    if(a < 16)
        ft_putchar(base[a % 16]);
    if(a >= 16)
    {
        ft_putnbr(a / 16);
        ft_putchar(base[a % 16]);
    }

}
int main(int argc, char **argv)
{
    int i;
    int a;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] >= '0' && argv[1][i] <= '9')
    	{
    		a = a * 10 + argv[1][i] - '0';
    		i++;
    	}
        ft_putnbr(a);
    }
    ft_putchar('\n');
    return 0;
}
