/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:29:39 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/12/17 17:56:21 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc(), and returns an array of “fresh” strings
** (all ending with ’\0’, including the array itself) obtained by spliting
** the string s using the character c as a delimiter.
** If the allocation fails the function returns NULL.
** Example : ft_strsplit("*hello*fellow***students*", ’*’)
** returns the array ["hello", "fellow", "students"].
*/

#include "libft.h"

static	int	counter(char const *str, char c)
{
	unsigned int	i;
	int				qt_c;

	i = 0;
	qt_c = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			while (str[i] != c && str[i])
				i++;
			qt_c++;
		}
		else
			i++;
	}
	return (qt_c);
}

char	**ft_split(char const *s, char c)
{
	char	**s2;
	int		i;
	int		start;
	int		k;

	i = 0;
	k = 0;
	s2 = malloc(sizeof(char **) * (counter(s, c) + 1));
	if (!s || !s2)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			s2[k] = ft_substr(s, start, i - start);
			k++;
		}
	}
	s2[k] = NULL;
	return (s2);
}

/*funcao da net, para interesse no futuro, com biblioteca maior

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**w;

	i = 0;
	k = 0;
	if (!s || !(w = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		if (!(w[i] = (char *)malloc(sizeof(char) * (ft_wordlen(&s[k], c) + 1))))
			return (NULL);
		j = 0;
		while (s[k] == c)
			k += 1;
		while (s[k] != c && s[k])
			w[i][j++] = s[k++];
		w[i][j] = '\0';
		i += 1;
	}
	w[i] = NULL;
	return (w);
}*/
