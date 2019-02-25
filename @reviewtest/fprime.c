
#include <stdlib.h>
#include <stdio.h>

void ft_prime(char *str)
{
	int i;
	int n;

	i = 2;
	n = atoi(str);
	if (n == 1)
		printf("1");
	if (n <= 1)
		return;
	while (i <= n)
	{
		if( n % i == 0)
		{
			printf("%d", i);
			if (n == i)
				return;
			printf("*");
			n = n / i;
			i = 2;
		}
		i++;
	}
}

int main()
{
	char str[] = "256";
	ft_prime(str);
	return 0;
}
