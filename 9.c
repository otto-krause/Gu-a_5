#include <stdio.h>
#include <stdlib.h>

 int main()
 {
 int mayor=0, menor=0, sueldo=0, can=0, exacto=0, I=0;
 printf("Ingrese la cantidad de personas: ");
 scanf("%d", &can);
 for(I=0;I<can;I++) {
 printf("Ingrese el sueldo de la persona numero %d : ", I+1);
 scanf("%d", &sueldo);
 if(sueldo>2000)
 {
 mayor+=+1;
 }
 else
 if (sueldo<2000)
 {
 menor+=+1;
 }
 else
 exacto+=+1;
 }
 system("cls");
 printf("Los que ganan mas de 2000 $ son: %d\n", mayor);
 printf("Los que ganan 2000 $ exactos son: %d\n", exacto);
 printf("Los que ganan menos de 2000 $ son: %d\n", menor);
 return 0;
 }
