/* program to print name and address using function */
/* NIKHIL KUMAR*/
#include<stdio.h>
#include<conio.h>

void main()
{
	void printline();
	void name();
	void address();
	clrscr();
	printline();
	name();
	address();
	printline();

	getch();
}

/* functions:printline()() */
void printline() /* contains no arguments */
{
       int i ;
       for(i=1;i<=70;i++)
	    printf("%c",'-');
}
/* function2: name()() */
void name()  /* contains no arguments */
{
printf("\n\t NAME: NIKHIL KUMAR");
}
/* function3: address ()() */
void address()  /* contains no arguments */
{
    printf("\n\t ADDRESS: HARI ENCLAVE DELHI-110086");
}
