#include <unistd.h>
void ft_putchar(char c)
{
    write (1, &c, 1);
}
int ft_hideup(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(s2[j] != '\0')
    {
        if(s1[i] == s2[j])
            i++;
        j++;
    }
    if (s1[i] == '\0')
        return (1);
    return (0);
}
int main(int argc, char **argv)
{
    int i;
    i = 0;
    if (argc == 3)
    {
        i = ft_hideup(argv[1], argv[2]);
        ft_putchar(i + 48);
    }
    ft_putchar('\n');
    return 0;
}
