/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:46:39 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/11/06 12:58:43 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return(1);
    else
        return(0);
}

/*#include <stdio.h>

int main (void) 
{
    int var1 = 'd';
    int var2 = '2';
    int var3 = '\t';
    int var4 = ' ';
    
    if( ft_isalpha(var1) ) 
        printf("var1 = |%c| is an alphabet\n", var1 );
    else 
        printf("var1 = |%c| is not an alphabet\n", var1 );
       
    if( ft_isalpha(var2) )
      printf("var2 = |%c| is an alphabet\n", var2 );
    else
      printf("var2 = |%c| is not an alphabet\n", var2 );

    if( ft_isalpha(var3) )
      printf("var3 = |%c| is an alphabet\n", var3 );
    else
      printf("var3 = |%c| is not an alphabet\n", var3 );

    if( ft_isalpha(var4) )
      printf("var4 = |%c| is an alphabet\n", var4 );
    else
      printf("var4 = |%c| is not an alphabet\n", var4 );
   
   return(0);
}*/