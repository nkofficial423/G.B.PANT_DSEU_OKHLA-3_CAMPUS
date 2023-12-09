/* Program To Sort The Array In Ascending Order*/
/* NIKHIL KUMAR */
#include<stdio.h>
#include<conio.h>

void main()
{
 int ARRAY[100], N, I, J, SWAP;

 clrscr();

 printf("Enter number of elements : ");
 scanf("%d", &N) ;

 printf("Enter %d integers :\n",N);

 for(I=0; I<N; I++)
    scanf("%d", &ARRAY[I]);

 for(I=0; I<N-1; I++)
 {
   for(J=0; J<N-I-1; J++)
   {
    if (ARRAY[J] > ARRAY[J+1]) /* For Decreasing order use < */
    {
       SWAP = ARRAY[J];
       ARRAY[J] = ARRAY[J+1];
       ARRAY[J+1] = SWAP;
    }
   }
  }

  printf ("Sorted List in ascending order :\n") ;
  for(I=0; I<N; I++ )
     printf("%d\n", ARRAY[I]) ;

  getch();
  }