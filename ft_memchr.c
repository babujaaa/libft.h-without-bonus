/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:59:57 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/12/25 22:30:15 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of c (converted to an unsigned char)
** in string s.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/*
void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;

	s1 = (char *)s;
	while (n-- > 0)
	{
		if ((unsigned char) *s1 == (unsigned char)c)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}*/
