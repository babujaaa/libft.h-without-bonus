/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:01:46 by mrolhas-          #+#    #+#             */
/*   Updated: 2023/01/07 19:30:11 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Procura a ultima local. de c (convertida a char e ptr) na string apontada
** por s.  O null character no fim e considerada parte da string, como tal,
** se c for `\0', a funcao encontra `\0'.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	int		i;

	chr = c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == chr)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;

	i = ft_strlen(s);
	j = 0;
	while (i >= j)
		if (s[i - j++] == c)
			return ((char *)&s[i - (j - 1)]);
	return (NULL);
}
**Visto na net
*/
