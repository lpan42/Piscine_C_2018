/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:43:44 by lpan              #+#    #+#             */
/*   Updated: 2018/07/19 12:46:53 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

char			**ft_split_whitespaces(char *str);
void			ft_show_tab(t_stock_par *par);
char			*ft_strdup(char *src);
t_stock_par		*ft_param_to_tab(int ac, char **av);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_strlen(char *str);

#endif
