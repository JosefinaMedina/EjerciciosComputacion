#include<stdio.h>
 
int main()
{
char i,j;
char longitud;
char cadena[500000];
char temporal;
printf("Introduce un texto: ");
gets(cadena);
longitud=strlen(cadena);
for (i=0,j=longitud-1; i<longitud/2; i++,j--)
{
	temporal=cadena[i];
	cadena[i]=cadena[j];
	cadena[j]=temporal;
}
printf("Resultado: %s\n", cadena);
getch ();
}