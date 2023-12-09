/*Program To Generate The Pattern*/
/*NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>
void main()
{
 int I,J;
 clrscr();
 for(I=1;I<=5;I++)
 {
  for(J=1;J<=I;J++)
  {
   printf("\t%d",J);
   }
   printf("\n");
   }
 getch();
}
