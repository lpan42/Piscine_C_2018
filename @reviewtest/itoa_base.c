/*Assignment name  : ft_itoa_base
Expected files   : ft_itoa_base.c
Allowed functions: malloc
--------------------------------------------------------------------------------
Write a function that converts an integer value to a null-terminated string
using the specified base and stores the result in a char array that you must
allocate.
The base is expressed as an integer, from 2 to 16. The characters comprising
the base are the digits from 0 to 9, followed by uppercase letter from A to F.
For example, base 4 would be "0123" and base 16 "0123456789ABCDEF".
If base is 10 and value is negative, the resulting string is preceded with a
minus sign (-). With any other base, value is always considered unsigned.
Your function must be declared as follows:
char	*ft_itoa_base(int value, int base);*/

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

void ft_strrev(int len, char *str)
{
	int i;
	int j;
	char temp;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

char	*ft_itoa_base(int value, int base)
{
	char *str;
	int i;
	int check;
	int nbr;
	int len;

	i = 0;
	check = 0;
	nbr = 0;
	len = 0;
	str = malloc(sizeof(char) * (128 + 1));
	if(value < 0 && base == 10)
	{
		check = 1;
		value = -value;
	}
	if (value == 0)
	{
		str[i] = '0';
		str[i + 1] = '\0';
		return(str);
	}
	while(value != 0)
	{
		nbr = value % base;
		if (nbr > 9)
			str[i] = (nbr - 10) + 'A';
		else
		 	str[i] = nbr + '0';
			value = value / base;
		i++;
	}
	if (check == 1)
		str[i] = '-';
	len = ft_strlen(str);
	ft_strrev(len, str);
	return(str);
}

int main()
{
	int value;
	int base;

	value = -789;
	base = 10;
	printf("%s\n", ft_itoa_base(value, base));
	return (0);
}
