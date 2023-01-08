/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:49:47 by mrolhas-          #+#    #+#             */
/*   Updated: 2023/01/07 22:07:16 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts the initial portion of a string pointed to the variable string, to
** an int representarion (type).
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	numero;
	int	sinal;

	i = 0;
	numero = 0;
	sinal = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sinal = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		numero = (numero * 10) + (str[i] - '0');
		i++;
	}
	return (numero * sinal);
}
