#include<stdio.h>
#include <math.h>

double expo(double t)
{
    return (1 + t +t*t/2+t*t*t/6);
}

int main()
{
    double x,resultado;
    printf("Ingresar el numero para evaluar la esponencial.\n");
    scanf("%d",&x);
    resultado = expo(x);
    printf("El resultado es %d",resultado);
    return 0;
}