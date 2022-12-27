/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:49:22 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/12/26 13:21:39 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes an int, and converts it to a null-terminated string.
*/

static int	number_digit(int nn)
{
	int	c;

	c = 0;
	if (nn == 0)
		return (1);
	if (nn < 0)
		c++;
	while (nn != 0)
	{
		nn = nn / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				size;
	long int		nb;

	nb = n;
	size = number_digit(nb);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * (-1);
	}
	if (nb == 0)
		str[0] = '0';
	str[size] = '\0';
	while (nb != 0)
	{
		str[size - 1] = (nb % 10) + 48;
		nb = nb / 10;
		size--;
	}
	return (str);
}

/*
char		*ft_itoa(int n)
{
	size_t	i;
	size_t	n_size;
	char	*str;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_size = ft_nbrlen(n, 10);
	if (!(str = (char *)malloc(sizeof(char) * (n_size + 1))))
		return (NULL);
	str[n_size] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i += 1;
	}
	while (i < n_size--)
	{
		str[n_size] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}*/