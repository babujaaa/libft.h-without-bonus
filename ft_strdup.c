/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:41:22 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/12/17 15:11:13 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates sufficient memory for a copy of the string s1, does the copy,
** and returns a pointer to it.
*/

char	*ft_strdup(const char *s)
{
	char	*s2;
	int		comprimento;
	int		i;

	comprimento = ft_strlen(s);
	s2 = (char *)malloc(sizeof(char) * comprimento + 1);
	if (!(s2))
		return (NULL);
	i = 0;
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*Outra opcao, da net e mais simples

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	c;
	char	*strd;

	c = 0;
	i = ft_strlen(s) + 1;
	strd = malloc(sizeof(char) * i);
	if (!strd)
		return (NULL);
	while (i > c)
	{
		strd[c] = s[c];
		c++;
	}
	strd[c] = '\0';
	return (strd);
}*/