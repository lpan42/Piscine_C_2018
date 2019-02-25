/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerrea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 13:39:30 by mguerrea          #+#    #+#             */
/*   Updated: 2018/07/22 21:52:28 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		check_lines(char *str);
int		check_col(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	allocate_char(char *rush, int *i, char c);
char	*ft_create_rush00(int x, int y);
char	*ft_create_rush01(int x, int y);
char	*ft_create_rush02(int x, int y);
char	*ft_create_rush03(int x, int y);
char	*ft_create_rush04(int x, int y);
void	rush00(int x, int y, int *ptr, char *rush00);
void	rush01(int x, int y, int *ptr, char *rush01);
void	rush02(int x, int y, int *ptr, char *rush02);
void	rush03(int x, int y, int *ptr, char *rush03);
void	rush04(int x, int y, int *ptr, char *rush04);
void	check_rush(char *str);
int		check_input(char *str, int line, int column);
void	display_name(char name, int line, int column, int result);
char	*ft_read_copy2(char *str, char *buf);
char	*ft_read_copy(char *str);

#endif
