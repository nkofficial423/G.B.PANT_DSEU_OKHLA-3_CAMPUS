/*Program To Find Sum of Digit of a Number*/
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>
void main()
{
 int N,T,sum=0,remainder;
 clrscr();
 printf("enter an integer:");
 scanf("%d",&N);
 T=N;
 while(T!=0)
 {
  remainder=T%10;
  sum=sum+remainder;
  T=T/10;
  }
   printf("sum of digits of %d is %d",N,sum);
   getch();
}