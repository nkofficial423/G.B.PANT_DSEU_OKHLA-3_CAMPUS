/* Program to Find Sum of First N Natural Numbers */
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>
void main()
{
 int N,I=1,SUM=0;
 clrscr();
 printf("Enter the value of N : ");
 scanf("%d",&N);
 while(I <= N)
 {
 SUM = SUM + I;
 I = I + 1;
 }
 printf("Sum of first %d natural numbers is %d", N,SUM);
 getch();
}