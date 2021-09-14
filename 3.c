#include <stdio.h>
#include <conio.h>

 int main()
 {
 int inferior, superior, I;

 printf( "\n Introduzca n%cmero (entero) inferior: ", 163 );
 scanf( "%d", &inferior );
 printf( "\n Introduzca n%cmero (entero) superior: ", 163 );
 scanf( "%d", &superior );
 printf( "\n " );
 for (I=inferior+1;I<superior;I++)

 printf("%d\t", I);
 if (inferior>superior)
 printf( "ERROR: %d no es mayor o igual que %d", superior, inferior );
 else
 return 0;
 }
