#include <stdio.h>
void findprime(int a, int b)
{
	int i;
	int nb;

	i = 2;
	if (a <= 0 || b <= 0)
		return;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
			nb = i;
		i++;
	}
	printf("%d\n", nb);
}
int main()
{
	int a = 12;
	int b = 42;
	findprime(a, b);
	return 0;
}
