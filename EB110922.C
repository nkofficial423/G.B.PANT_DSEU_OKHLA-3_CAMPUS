/*program to find sum of two matrices of size 3*3 */
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>
#define size 3

void main()
{
 int A[size][size],B[size][size],C[size][size];
 int row,col;
 clrscr();
 /* input elements in first matrix*/
 printf("enter elements in matrix A of size3*3 :\n");
 for(row=0; row<size; row++)
 {
 for(col=0; col<size; col++)
 {
 scanf("%d",&A[row][col]);
 }
 }
 /*input elements in second matrix*/
 printf("enter elements in matrix B of size3*3 :\n");
  for(row=0; row<size; row++)
 {
 for(col=0; col<size; col++)
 {
 scanf("%d",&B[row][col]);
 }
 }
 /* add both matrices A and B and stores result in matrix C*/
   for(row=0; row<size; row++)
 {
 for(col=0; col<size; col++)
 {
 /*Cij=Aij+Bij*/
 C[row][col]=A[row][col]+B[row][col];
 }
 }
 /* print the value of resultant matrix C*/
 printf("\n sum of matrices A+B=\n");
  for(row=0; row<size; row++)
 {
 for(col=0; col<size; col++)
 {
 printf("\t%d", C[row][col]);
 }
 printf("\n");
 }
 getch();
  }


