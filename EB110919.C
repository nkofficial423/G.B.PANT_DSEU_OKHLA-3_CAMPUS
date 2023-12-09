/* Program To Find Sum and Average Of Array */
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>

void main()
{
  int array[10] ;
  int I, SUM=0 ;
  float AVG=0  ;

  clrscr() ;

   for(I=0; I<10; I++)
      scanf("%d", &array[I]);

      for(I = 0; I < 10; I++)
      {
       SUM = SUM + array[I] ;
      }

      AVG = SUM / I;

      printf("\n Sum Of Array = %d ", SUM) ;
      printf("\n Average Of Array = %f ", AVG) ;


     getch();
     }