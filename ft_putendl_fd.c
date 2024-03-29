/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:59:39 by mrolhas-          #+#    #+#             */
/*   Updated: 2023/01/07 22:00:21 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the file descriptor fd followed by a ’\n’.
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}

/*What is a ternarie? Does this even work?

void	ft_putendl_fd(char const *s, int fd)
{
	return (ft_putstr_fd(s, fd) == ft_putchar_fd('\n', fd) ? 0 : -1);
}*/
