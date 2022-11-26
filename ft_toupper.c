/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:57:24 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/11/26 18:04:28 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Transforma letras minusculas em maiusculas.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*int	ft_toupper(int c)
{
	return ((c >= 'a' && c <= 'z') ? c - 32 : c);
	**Solucao da net
	**If Condition is true ? then value X : otherwise value Y
}*/