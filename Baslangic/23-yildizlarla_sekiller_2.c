#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// ��i dolu e�kenar ��gen �izimi
	int bos1=5, tane=1;
	for (int i=1; i<=5; i+=1)
	{
		for(int a=1; a<=bos1; a+=1)
			printf(" ");
		for(int j=1; j<=tane; j+=1)
			printf("*");
		bos1-=1;
		tane+=2;
		printf("\n");
	}	
	
	printf("________________________________________\n\n");
	
	// Dik ��gen ve sa��na simetrisi
	int defa=1,bos=17;
	for (int i=1; i<=5; i+=1)
	{
		for (int a=1; a<=defa; a+=1)
		printf("*");
		for (int j=bos; j>=1; j-=1)
		printf(" ");
		for (int a=1; a<=defa; a+=1)
		printf("*");
		
		bos-=4;
		defa+=2;
		printf("\n");
	}
	
	printf("________________________________________\n\n");
	
	// �apraz diyagonal X �izdirme
		for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			if(i==j || i+j==6)
				printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	
	getch();
}
