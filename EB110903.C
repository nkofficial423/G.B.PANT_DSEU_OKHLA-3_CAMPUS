/* Program to Find Area Of Rectangle */
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>

void main ()
{
  int L,B,AREA,PERIMETER ;
  clrscr() ;

  printf("Enter The Value Of Lenghth : ") ;
  scanf("%d",&L) ;
  printf("\n Enter The Value Of Breadth : ") ;
  scanf("%d",&B) ;
  AREA = L*B ;
  PERIMETER = 2*L + 2*B ;

  printf("\n The Area Of Rectangle is %d",AREA) ;
  printf("\n The Perimeter Of Rectangle id %d", PERIMETER) ;

  getch() ;
  }