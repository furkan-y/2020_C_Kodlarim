#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish")

	int a=10; // a isminde bir deðiþken main fonksiyonu içinde tanýmlanýyor
	{
		//küme parantezleri ile bir alt blok oluþtu
		int a=5;
		printf("%d",a);
	}
	printf("\n%d",a);
	printf("\n%d",a++);
	printf("\n%d",++a);


	/* Arithmetic Operators: +, -, *, /, %, ++, --
	Relational Operators: ==, !=, >, <, >=, <=
	Logical Operators: &&, ||, !
	Bitwise Operators(Bitsel Operatör): 
	Assume A = 60 and B = 13 in binary format, they will be as follows -
  	A = 0011 1100 	
	B = 0000 1101
    A&B = 0000 1100	
    A|B = 0011 1101 
____________________________________________________________________________*/

	float pi=3.14;
	int b;
	printf("\n\n%d",(int)pi);
	printf("\n%f",pi);
	b=pi;
	printf("\n%d",b);
	
	printf("\n_____________________________________________________________________\n");
  
	int x=2;
	int y=5;			// 0010 0100 (aslýnda 8bitlik ama baþlardaki 0000'ý yazmadým
	printf("%d",x&y); 	// 0000
	printf("\n%d",x|y);   // 0111
  
  
  
	
}
