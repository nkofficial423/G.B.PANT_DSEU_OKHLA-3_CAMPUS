/*PROGRAM TO FIND LARGEST OF TWO NUMBERS */
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>
 void main()
 {
 int N1,N2;
 clrscr();

 printf("enter the value of N1: ");
 scanf("%d",&N1);
 printf("\n enter the value of N2; ");
 scanf("%d",&N2);

 if(N1>N2)
       printf("\n%d is greater than %d",N1,N2);
 else
     printf("\n %d is greater than %d", N2,N1);
  getch();
  }
