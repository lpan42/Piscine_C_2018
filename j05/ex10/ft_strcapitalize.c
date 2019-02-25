/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:16:05 by lpan              #+#    #+#             */
/*   Updated: 2018/07/13 11:46:41 by lpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_if_is_numberalpha(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	if (*str >= 'a' && *str <= 'z')
		return (2);
	if (*str >= 'A' && *str <= 'Z')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if ((ft_if_is_numberalpha(&str[0])) == 2)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((ft_if_is_numberalpha(&str[i]) == 2) &&
				(ft_if_is_numberalpha(&str[i - 1]) == 0))
			str[i] = str[i] - 32;
		if ((ft_if_is_numberalpha(&str[i]) == 3) &&
				(!(ft_if_is_numberalpha(&str[i - 1]) == 0)))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
