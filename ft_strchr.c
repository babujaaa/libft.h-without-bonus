/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:15:41 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/11/26 19:00:17 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Procura a primeira localizacao de c (convertida a char) na string apontada
** por s.  O null character no fim e considerada parte da string, como tal, 
** se c for `\0', a funcao encontra `\0'.
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}

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