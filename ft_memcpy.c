/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:06:40 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/12/22 19:32:06 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes from memory area src to memory area dest.
** If dest and src overlap, behavior is undefined.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}
