#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Rakamlarla ters dik üçgen çizimi
	int y=5;
	for (int s=1; s<=5; s++)
	{
		for (int i=1; i<=y; i++)
		printf("%d",i);
	y-=1;	
	printf("\n");
	}
	
	// Rakamlarla dik üçgen çizimi
	for (int s=1; s<=5; s++)
	{
		for (int i=1; i<=s; i++)
			printf("%d",i);
		printf("\n");
	}
	
	printf("____________________________________________________________\n\n");
	
	// Rakamlarla ters dik üçgenin saða simetrisinin çizimi
	int son=5,bos;
	for (int a=1; a<=5; a++)
	{
		for (int b=1; b<=a; b++)
			printf(" ");
		for (int i=1; i<=son; i++) //12345
			printf("%d",i);
		son-=1;
		printf("\n");
	}
	
	// Rakamlarla dik üçgenin saða simetrisinin çizimi
	int x=5;
	for (int a=1; a<=5; a++)
	{
		for(int b=5; b>=a; b--)
			printf(" ");
		for(int i=5; i>=x; i--)
			printf("%d",i);
		x--;
		printf("\n");
	}
	
	printf("____________________________________________________________\n\n");
	
	// Rakamlarla içi boþ eþkenar üçgen çizimi
	int sy=1;
	for (int s=1; s<=7; s++)
	{
		for (int i=8-s; i>=1; i--)
			printf("%d",i);
		for (int b=1; b<=sy; b++)
			printf(" ");
			sy+=2;
		for (int k=2+s; k<=9; k++)
			printf("%d",k);
		printf("\n");
	}
	
	getch();
}
