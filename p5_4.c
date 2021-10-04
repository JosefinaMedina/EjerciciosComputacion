#include<stdio.h>
 int esprimo(int) ;
 int main()
{
   int n, resultado;
   printf("Ingresar el numero a chequear.\n");
   scanf("%d",&n);
    if (n==0)
        printf("\n No es primo ");
    else if (n==1)
        printf("\n No es primo ");
    else if (n==-1)
        printf("\n No es primo ");
    else
         resultado = esprimo(n);
         if ( resultado == 1 )
            printf("%d Es primo.\n", n);
         else
             printf("%d No es primo.\n", n);
        return 0;
}
 
 int esprimo(int a)
{
   int c;
   for ( c = 2 ; c <= a - 1 ; c++ )
   { if ( a%c == 0 )
        return 0; }
   return 1;
}