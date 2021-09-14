#include <stdio.h>
#include <stdlib.h>

 int main()
 {
 int base=0, exponte=0, total=0, I=0;
 total=1;
 printf("Numero de base: ");
 scanf("%d", &base);
 printf("Numero de exponente: ");
 scanf("%d", &exponte);
 system ("cls");

 for (I=1;I<=exponte;I++){
 total=total*base;
 }

 printf("El numero es: \n%d\n", total);

 }
