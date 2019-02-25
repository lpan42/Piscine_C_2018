/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:12:25 by lpan              #+#    #+#             */
/*   Updated: 2018/07/10 20:45:53 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------
Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.
The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".
Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".
Minus signs ('-') are interpreted only if they are the first character of the
string.
Your function must be declared as follows:
int	ft_atoi_base(const char *str, int str_base);*/
#include <stdio.h>
int ft_check_nbr(char c, int str_base)
{
	if(str_base <= 10)
		if(c >= '0' && c <= ('9' + str_base - 10))
			return (1);
	if(str_base > 10)
		if ((c >= '0' && c <= '9') ||
			(c >= 'A' && c <= ('A' + str_base - 10)) ||
			(c >= 'a' && c <= ('a' + str_base - 10)))
			return (1);
	return (0);
}
int		ft_atoi_base(char *str, int str_base)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	i = 0;
	result = 0;
	if (*str == '\0' || str_base < 2 || str_base > 16)
		return(0);
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	while (ft_check_nbr(str[i], str_base))
	{
		if (str[i] >= 'A' && str[i] <= 'F')
			result = result * str_base + str[i] - 'A' + 10;
		if (str[i] >= 'a' && str[i] <= 'f')
			result = result * str_base + str[i] - 'a' + 10;
		if (str[i] >= '0' && str[i] <= '9')
			result = result * str_base + str[i] - '0';
		i++;
	}
	return (sign * result);
}

int main()
{
	char *str = "-34566a";
	int base = 16;
	printf("%d\n", ft_atoi_base(str, base));
	return(0);
}
