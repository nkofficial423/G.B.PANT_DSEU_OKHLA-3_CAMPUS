/*Program to Convert the Weight Kilogram into Pound*/
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>

void main()
{
 float K,P;
 clrscr();

 printf("Enter the weight in kilogram: ");
 scanf("%f",&K);

 P=2.2*K;
 printf("\n The weight in pound is %f",P);

 getch();
 }
