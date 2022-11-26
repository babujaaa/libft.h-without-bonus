/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:04:49 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/11/26 18:11:30 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Transforma letras maiusculas em minusculas.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*int	ft_tolower(int c)
{
	return ((c >= 'A' && c <= 'Z') ? c + 32 : c);
	**Solucao da net
	**If Condition is true ? then value X : otherwise value Y
}*/