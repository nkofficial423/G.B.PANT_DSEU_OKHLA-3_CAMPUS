/* Program to Convert Temperature From Fahrenheit To Celcius */
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>

void main()
{
  float C,F ;
  clrscr() ;

  printf("Enter The Temperature In Fahrenheit : ") ;
  scanf("%f",&F) ;

  C = 5*(F-32)/9 ;

  printf("\n The Temperature in Celcius is %f",C) ;

  getch() ;

  }