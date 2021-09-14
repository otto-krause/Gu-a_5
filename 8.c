#include <stdio.h>
#include <stdlib.h>

 int main()
 {
 int pos=0, neg=0, cero=0, I=0, num=0, total=0;
 printf("Ingrese la cantidad de numeros: ");
 scanf("%d", &total);
 for(I=1;I<=total;I++) {
 printf("Introduzca un numero entero: ");
 scanf("%d", &num);
 if(num>0)
 {
 pos+=+1;
 }
 else
 if (num<0)
 {
 neg+=+1;
 }
 else
 cero+=+1;
 }
 system("cls");
 printf("El total de numeros positivos es: %d\n", pos);
 printf("El total de numeros negativos es: %d\n", neg);
 printf("El total de ceros es: %d\n", cero);
 return 0;
 }
