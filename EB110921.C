/* Program To Read and Print THe Array Of Size 3x3 */
#include<stdio.h>
#include<conio.h>
#define SIZE 3

void main ()
{
  int A[SIZE] [SIZE] ;
  int row, col ;
  /* input elements in array */
  printf("Enter Elements In Array Of Size 3x:\n") ;
  for (row=0; row<SIZE; row++)
  {
      for (col=0; col<SIZE; col++)
      {
	  scanf ("%d",&A[row] [col]) ;
      }
  }
  /* Print The value Of Array */
  printf ("\n The Elements Of Array Are:\n") ;
  for (row=0; row<SIZE ; row++)
  {
      for(col=0; col<SIZE; col++)
      {
	 printf("\t %d", A[row] [col]);
      }
      printf("\n");
  }
  getch();
  }