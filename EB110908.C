/*PROGRAM TO FIND LARGEST OF THREE NUMBER*/
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>

void main ()
{
int N1,N2,N3,G;
clrscr();
printf("enter the value of N1,N2,N3; ");
scanf("%d\n %d\n %d",&N1,&N2,&N3);

if(N1>N2)
 {
 if(N1>N3)
  G=N1;
 else
  G=N3;
 }
 else
 {
 if(N2>N3)
  G=N2;
 else
  G=N3;
 }
 printf("\n largest of three number is %d",G);
 getch();
}
