/* Program To Find The Power Of a Number */
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>
#include <math.h>


void main()
{
     int base, power;
     long int result;

     printf("\n Enter The Base Number : ");
     scanf("%d", &base);
     printf("\n Enter The Power Raised ; ");
     scanf("%d", &power);

     result = pow(base,power);

     printf("\n %d^%d = %1d", base, power, result);

     getch();

 }