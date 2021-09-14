#include <stdio.h>
#include <stdlib.h>

 int main()
 {
 int num=0, num1=0, prom=0, suma=0, mayor=0, total=0, prom1=0, I=0;
 printf("\n\n\tIngrese la cantidad de numeros: ");
 scanf("%d", &num1);
 system ("cls");
 for (I=0;I<num1;I++) {
 printf(" El numero %d es: ",I+1);
 scanf("%d", &num);
 if (mayor<num)
 mayor=num;
 total=num1*num;
 suma=suma+total;
 }
 prom=suma/num1;
 prom1=prom/num1;
 printf("El numero promedio es: \n%d\n", prom1);
 printf("El numero mas grande es: \n%d\n", mayor);
 return 0;
 }
