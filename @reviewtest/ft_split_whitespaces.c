/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 23:09:59 by lpan              #+#    #+#             */
/*   Updated: 2018/07/15 23:10:01 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_check_space(char *str)
{
    if (*str == ' ' || *str == '\t' || *str == '\n' )
        return (1);
    return (0);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
    int     size;

	i = 0;
    size = 0;
    while(src[size])
        size++;
	dest = (char*)malloc(sizeof(char)*(size + 1));
    while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (dest == 0)
		return (0);
	return (dest);
}

int ft_word_count(char *str)
{
    int i;
    int wc;

    i = 0;
    wc = 0;
    while(ft_check_space(&str[i]))
        i++;
    if(i == 0)
        wc++;
    while(str[i] != '\0')
    {
        if((!(ft_check_space(&str[i]))) && (ft_check_space(&str[i - 1])))
            wc++;
        i++;
    }
    if(i == 0)
        return (0);
    return (wc);
}

void ft_fillspace(char *str, char **array)
{
    int i;
    int j;
    int check;

    i = 0;
    j = 0;
    check = 1;
    while(ft_check_space(&str[i]))
        i++;
    while (str[i] != '\0')
    {
        if(ft_check_space(&str[i]))
        {
            str[i] = '\0';
            check = 1;
        }
        else if (check == 1 && (!(ft_check_space(&str[i]))))
        {
            array[j] = str + i;
            check = 0;
            j++;
        }
        i++;
    }
    array[j] = 0;
}

char **ft_split_whitespaces(char *str)
{
    int wc;
    int i;
    int j;
    char *str2;
    char **array;

    i = 0;
    j = 0;
    while(ft_check_space(str))
        str++;
    str2 = ft_strdup(str);
    wc = ft_word_count(str2);
    array = (char**)malloc(sizeof(char*) * (wc + 1));
    if (array == 0)
		return (0);
    ft_fillspace(str2, array);
    return (array);
}

void ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}
void ft_print_words_tables(char **tab)
{
    int i;

    i = 0;
    while (tab[i])
    {
        ft_putstr(tab[i]);
        ft_putchar('\n');
        i++;
    }
}

int main()
{
    char str[] = "     this is the example";
    char **array;

    array = ft_split_whitespaces(str);
    ft_print_words_tables(array);
    return (0);
}
