#include<stdio.h>
#include <math.h>
int main()
{FILE * fd;
fd=fopen("datospractica5.txt", 'r');
   int n;
   char c;
   int i;
   n=0;
   c=getc(fd);
   while(c!=EOF);
   {if (c=="a"||c=="A");
    n++;
    c=getc(fd);}
   printf("Frecuencia es %d",n);
    fclose(fd);
   return 0;
}
