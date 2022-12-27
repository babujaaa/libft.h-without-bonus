/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:53:07 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/12/27 19:56:00 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the file descriptor fd.
*/

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
}

/*int		ft_putstr_fd(char const *s, int fd)
{
	int		i;
	int		ret;

	i = 0;
	ret = -1;
	if (s != NULL)
	{
		ret = 0;
		while (s[i] && ret >= 0)
			ret = ft_putchar_fd(s[i++], fd);
	}
	return (ret);
}*/
