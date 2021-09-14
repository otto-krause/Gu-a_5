#include <stdio.h>
#include <stdlib.h>

 int main()
 {
 int prom1=0, prom2=0, I=0, nota=0, J=0, prom3=0, prom4=0;
 system ("cls");
 for (I=0;I<30;I++) {
 prom3=0;
 printf("Alumno numero %d : \n",I+1);
 for (J=0;J<10;J++){
 printf(" La nota numero %d del alumno es: ",J+1);
 scanf("%d", &nota);
 prom3+=nota;

 }
 prom4=prom3/10;
 printf("El promedio del alumno es: %d \n",prom4);
 prom2=prom2+prom4;
 }

 prom1=prom2/30;
 printf("La nota promedio es: \n%d\n", prom1);

 }
