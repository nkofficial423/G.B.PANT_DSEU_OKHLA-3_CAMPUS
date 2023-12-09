/* Program to Print The Numbers From 1 to 100 */
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>
void main()
{
 int N;
 clrscr();
 /* To print odd numbers */
 printf("\n ODD NUMBERS FROM 1 TO 100 : \n");
 N=1;
 while(N<=100)
 {
 printf("\t %d", N);
 N = N + 2;
 }
 /* To print even numbers */
 printf("\n EVEN NUMBERS FROM 1 TO 100 : \n");
 N=2;
 while(N<=100)
 {
 printf("\t %d", N);
 N = N + 2;
 }
 getch();
}