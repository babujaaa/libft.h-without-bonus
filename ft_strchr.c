/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:15:41 by mrolhas-          #+#    #+#             */
/*   Updated: 2023/01/07 19:28:10 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of c (converted to a char) in the string
** pointed to by s. The terminating null character is considered to be part
** of the string; therefore if c is `\0', the functions locates the
** terminating `\0'.
*/

char	*ft_strchr(const char *s, int c)
{
	char	chr;
	int		i;

	chr = c;
	i = 0;
	while (s[i] != chr && s[i] != '\0')
		i++;
	if (s[i] == chr)
		return ((char *)s + i);
	return (NULL);
}

/*solucao soraia
char	*ft_strchr(const char *s, int c)
{
	char	chr;
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	chr = c;
	while (str[i] != chr)
	{
		if (str[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)str + i);
}*/

/*Encontrada na net uma mais reduzida
char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != (char)c)
		if (!s[i++])
			return (NULL);
	return ((char *)&s[i]);
}*/
