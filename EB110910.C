/* Program To Print Days Of Week Using Switch Case */
/* NIKHIL KUMAR  */
#include<stdio.h>
#include<conio.h>
void main()
{
  int N;
  clrscr();
  printf("\n Enter of Week as Number 1 to 7 :");
  scanf("%d",&N);
  switch(N)
  {
   case 1:
      printf("\n MONDAY ");
      break;
   case 2:
      printf("\n TUESDAY ");
      break;
   case 3:
      printf("\n WEDNESDAY ");
      break;
   case 4:
      printf("\n THURSDAY ");
      break;
   case 5:
      printf("\n FRIDAY ");
      break;
   case 6:
      printf("\n SATURDAY ");
      break;
   case 7:
      printf("\n SUNDAY ");
      break;
   default:
      printf("\n WRONG INPUT ");
      }
   getch();
      }