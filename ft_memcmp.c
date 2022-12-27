/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:47:53 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/12/26 11:10:04 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares byte string s1 against byte string s2. Both strings are assumed
** to be n bytes long.
** The memcmp() function returns an integer less than, equal to, or
** greater than zero if the first n bytes of s1 is found,
** respectively, to be less than, to match, or be greater than the
** first n bytes of s2.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	k;
	unsigned char	*l;
	unsigned char	*j;

	l = (unsigned char *)s1;
	j = (unsigned char *)s2;
	k = 0;
	while (k < n)
	{
		if (l[k] != j[k])
			return (l[k] - j[k]);
		k++;
	}
	return (0);
}*/

/*int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;

	i = 0;
	while ((i < n) && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		i += 1;
	if (i == n)
		return (0);
	else
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}*/
