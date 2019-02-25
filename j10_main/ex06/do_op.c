/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 23:36:45 by lpan              #+#    #+#             */
/*   Updated: 2018/07/19 20:49:42 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_check_argv(char **argv, int a, int b, int i)
{
	void (*cal[5])(int a, int b);
	char *sign;

	sign = "+-*/%";
	cal[0] = ft_sum;
	cal[1] = ft_sub;
	cal[2] = ft_mul;
	cal[3] = ft_div;
	cal[4] = ft_mod;
	if (argv[2][1] == '\0')
	{
		while (sign[i] != '\0')
		{
			if (argv[2][0] == sign[i])
			{
				(*cal[i])(a, b);
				ft_putstr("\n");
				return ;
			}
			i++;
		}
	}
	ft_putstr("0\n");
}

int		main(int argc, char **argv)
{
	int a;
	int b;
	int i;

	i = 0;
	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	ft_check_argv(argv, a, b, i);
	return (0);
}
