FILE *fp
fp= fopen("datospractica5.txt", "r")

int main()

{
   char str[1000000], letra;
   int i, freq = 0;
   printf("Ingresar frase: ");
   gets(str);
   printf("Ingrese letra a encontrar: ");
   scanf("%c",&letra);
   for(i = 0; str[i] != '\0'; ++i)
   {
       if(letra == str[i])
           ++freq;
   }
   printf("Frequency of %c = %d", letra, freq);
   return 0;
   fclose(fp)
}