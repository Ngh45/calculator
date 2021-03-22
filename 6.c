#include <stdio.h>
#include "conio.h"
void main()
{
	int A, B, OR, AND, NOTA, NOTB, NAND, NOR;
	printf("Type the value of A=") ;
	scanf("%d",&A);
	puts("Type the value of B=");
	scanf("%d", &B);
	NOTA=!A;
	NOTB=!B;
	OR=A||B;
	AND=A&&B;
	NAND=!(A&&B);
	NOR=!(A||B);
	printf("\n\nYour Outputs are NOTA=%d , NOTB=%d, OR=%d, AND=%d, NAND=%d and NOR=%d",NOTA,NOTB,OR, AND, NAND, NOR);
}