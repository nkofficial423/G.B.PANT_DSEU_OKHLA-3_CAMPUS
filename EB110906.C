/* Program to Find Simple Interest 8/
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>

void main()
{
  float P,R,T,SI ;
  clrscr() ;

  printf("Enter Principle Amount : ") ;
  scanf("%f", &P) ;
  printf("\n Enter Rate Of Interest : ") ;
  scanf("%f", &R) ;
  printf("\n Enter Time Period in Years : ") ;
  scanf("%f", &T) ;

  SI = (P * R * T) / 100 ;
  printf("Simple Interest = %f", SI) ;

  getch() ;
}