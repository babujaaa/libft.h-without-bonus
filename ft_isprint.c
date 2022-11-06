/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:26:20 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/11/06 18:22:21 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return(1);
    return(0);
}

/*#include <stdio.h>

int main()
{
    char c;

    c = 'Q';
    printf("Result when a printable character %c is passed to isprint(): %d", c, ft_isprint(c));

    c = '\n';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, ft_isprint(c));

    return 0;
}*/