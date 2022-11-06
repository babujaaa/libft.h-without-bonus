/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolhas- <mrolhas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:53:33 by mrolhas-          #+#    #+#             */
/*   Updated: 2022/11/06 18:22:19 by mrolhas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	ft_isascii(int c)
{
	//solucao de modo a nao escrever o "acima de 0", 
    //encontrado na procura de melhorias
    unsigned int	u;

	u = (unsigned int)c;
	if (u <= 127)
		return (1);
	return (0);
}*/

/* main da internet
#include <stdio.h>
#include <ctype.h>
 
int main(void)
{
   int ch;
 
   for (ch = 0x7c; ch <= 0x82; ch++) {
      printf("%#04x    ", ch);
      if (ft_isascii(ch))
         printf("The character is %c\n", ch);
      else
         printf("Cannot be represented by an ASCII character\n");
   }
   return 0;
}*/
