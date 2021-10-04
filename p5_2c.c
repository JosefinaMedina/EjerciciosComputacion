#include<stdio.h>
#include<math.h>
int main()
{
    float t,t1,a,x; 
      printf("\tCalculadora de pocision\n");
      printf("---------------------------\n");
      printf("Ingrese el tiempo donde corta : ");
      scanf("%f", &t1);
      printf("Ingrese la aceleracion : ");
      scanf("%f", &a);
      printf("Ingrese el tiempo donde quiere saber la posicion : ");
      scanf("%f", &t);
      if (t1<0)
      {printf("Error");}
      else if (t<0)
      {printf("Error");}
      else if (t1<t)
        {x=.5*a*t1*t1+a*t1*(t-t1);
            printf("\nLa posicion es %f",x);}
      else if(t1>=t)
        {x=.5*a*t*t;
            printf("\nLa posicion es %f",x);}
      return 0;
