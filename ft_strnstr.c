/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:40:09 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/11/26 19:48:03 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (big[i] && little[j] && len > 0)
	{
		j = 0;
		if (little[j] != big[i])
		{
			i++;
			len--;
		}
		while (little[j] == big[i] && len > 0 && big[i])
		{
			j++;
			i++;
			len--;
		}
	}
	if (little[j] == '\0')
		return ((char *)big + (i - j));
	return (NULL);
}
