/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:12:25 by lpan              #+#    #+#             */
/*   Updated: 2018/07/07 16:10:14 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_if_printable(char *str)
{
	if (*str < 32 && *str > 126)
		return (0);
	return (1);
}

int		ft_atoi(char *str)
{
	int			sign;
	int			result;
	int			i;

	sign = 1;
	i = 0;
	result = 0;
	ft_if_printable(str);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
	{
		i++;
	}
	while (str[i] == ' ')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}
