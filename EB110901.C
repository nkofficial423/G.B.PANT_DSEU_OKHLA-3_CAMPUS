/* Program to Find Average Of Two Numbers */
/* NIKHILO KUMAR */
#include<stdio.h>
#include<conio.h>

void main()
{
 float N1,N2,AVG ;
 clrscr() ;

 printf("Enter The Value Of N1 : ") ;
 scanf("%f", &N1) ;
 printf("\n Enter The Valuie Of N2 : ") ;
 scanf("%f", &N2) ;

 AVG = (N1+N2)/2 ;

 printf("\n The Average Of Two Number is %f",AVG) ;

 getch() ;
 }