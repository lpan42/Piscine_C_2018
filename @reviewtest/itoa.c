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

char	*ft_itoa(int value)
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
	if(value < 0)
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
		nbr = value % 10;
		str[i] = nbr + '0';
		value = value / 10;
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

	value = 546;
	printf("%s\n", ft_itoa(value));
	return (0);
}
