/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 01:15:01 by lpan              #+#    #+#             */
/*   Updated: 2018/07/19 20:20:35 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>

void	ft_sum(int a, int b);
void	ft_sub(int a, int b);
void	ft_div(int a, int b);
void	ft_mul(int a, int b);
void	ft_mod(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putstr(char *str);

#endif
