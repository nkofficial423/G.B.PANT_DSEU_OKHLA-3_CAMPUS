/* Program To Print Array */
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>

void main()
{
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0} ;
  int i;

  clrscr() ;

  for(i = 0; i < 10; i++) ;
     printf("\t %d", array[i]) ;

 for(i=0; i<10; i++) ;
 {
    printf("\nEnter the element of array : ") ;
    scanf("%d", &array[i] ) ;
 }

 printf("\nThe element of array : \n") ;
 for(i = 0; i < 10; i++)
    printf("\t %d ", array[i] ) ;

 getch();
 }