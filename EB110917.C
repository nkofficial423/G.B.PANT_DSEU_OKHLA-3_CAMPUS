/*Program To Find The Number is Prime or Not*/
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>
void main()
{
 int N,I,P=1;
 clrscr();
 printf("enter the value of N:");
 scanf("%d",&N);
 for(I=2;I<N;I++)
 {
  if(N%I==0)
  {
  P=0;
  break;
  }
 }
 if(P==1)
 printf("number is prime");
 else
 printf("number is not prime");
 getch();
}