#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Kum saati çizimi
	int defa1=9;
	for (int i=1; i<=5; i+=1)
	{
		for (int a=1; a<=i; a+=1)
			printf(" ");
		for (int j=defa1; j>=1; j-=1)
			printf("*");
			
		defa1-=2;
		printf("\n");
	}
	int kez=1;
	for (int i=1; i<=5; i+=1)
	{
		for (int a=5; a>=i; a-=1)
			printf(" ");
		for (int j=1; j<=kez; j+=1)
			printf("*");
			
		kez+=2;
		printf("\n");
	}
	
	printf("________________________________________\n\n");
	
	// Dama tahtasý gibi þekil çizimi
	for(int i=1; i<=10; i++)
	{
		for(int j=1; j<=5; j++)
		if(i%2!=0)
			printf("* ");
		else if(i%2==0)
			printf(" *");
		printf("\n");
	}
	
	getch();
}
