#include <conio.h>
#include <stdio.h>

 int main()
 {
 int a, b, fact = 1;

 printf("Escribe un numero para calcular su factorial\n");
 scanf("%d", &a);

 for (b = a; b > 1; b--){
 fact = fact * b;
 }
 printf("El factorial de %d = %d\n", a, fact);
 return 0;
 }
