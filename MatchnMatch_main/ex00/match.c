/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 11:24:05 by lpan              #+#    #+#             */
/*   Updated: 2018/07/14 23:49:44 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	if (*s1 == *s2 && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	if (*s1 != '\0' && *s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	if (*s1 == *s2 && *s2 != '\0')
		return (match(s1 + 1, s2 + 1));
	return (0);
}
int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", match(argv[1], argv[2]));
	}
	return (0);
}
