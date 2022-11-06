int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9') 
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
    
    if( ft_isdigit(var1) ) 
        printf("var1 = |%c| is a number\n", var1 );
    else 
        printf("var1 = |%c| is not a number\n", var1 );
       
    if( ft_isdigit(var2) )
      printf("var2 = |%c| is a number\n", var2 );
    else
      printf("var2 = |%c| is not a number\n", var2 );

    if( ft_isdigit(var3) )
      printf("var3 = |%c| is a number\n", var3 );
    else
      printf("var3 = |%c| is not a number\n", var3 );

    if( ft_isdigit(var4) )
      printf("var4 = |%c| is a number\n", var4 );
    else
      printf("var4 = |%c| is not a number\n", var4 );
   
    return(0);
}*/