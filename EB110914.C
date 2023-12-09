/* Program to Find Factorial of a Number */
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>
void main()
{
int N,I,FACT=1;
clrscr();
printf(" enter the value of N:");
scanf("%d",&N);
for (I=1; I<=N; I++)
{
FACT = FACT *I;
}
printf(" factorial of a number is %d", FACT);
getch();
}