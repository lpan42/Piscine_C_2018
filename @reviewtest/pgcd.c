#include <stdlib.h>
#include <stdio.h>

int pgcd(int a, int b)
{
    int n;
    int result;

    n = 1;
    while (n <= a && n <= b)
    {
        if ((a % n == 0) &&(b % n == 0))
            result = n;
        n++;
    }
    return (result);
}
int main(int argc, char **argv)
{
    int a;
    int b;

    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        printf("%d", pgcd(a, b));
    }
    printf("\n");
}
