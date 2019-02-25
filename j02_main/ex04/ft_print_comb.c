/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 19:41:07 by lpan              #+#    #+#             */
/*   Updated: 2018/07/05 16:39:11 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomma(int a, int b, int c)
{
	if (a != 7 || b != 8 || c != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar(a  % 10 + 48);
				ft_putchar(b % 10 + 48);
				ft_putchar(c % 10 + 48);
				ft_putcomma(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}

int		main()
{
	ft_print_comb();
	return (0);
}
