#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL, "Turkish");
	
	// Ters e�kenar ��genin 1'den 7'ye rakamlarla �izimi
	for (int s=1; s<=4; s++)
	{
		for(int i=1; i<=s; i++)
			printf(" ");
		for(int d=s; d<=8-s; d++)
			printf("%d",d);
		printf("\n");
	}
	
	// Ters e�kenar ��genin 7'den 1'e rakamlarla �izimi
	for (int s=1; s<=4; s++)
	{
		for(int i=1; i<=s; i++)
			printf(" ");
		for(int k=8-s; k>=s; k--)
			printf("%d",k);
		printf("\n");
	}
	printf("____________________________________________________________\n\n");
	
	// Ters e�kenar ��genin 5'den 1'e 1'den 5'e rakamlarla �izimi
	for (int s=1; s<=5; s+=1)
	{
		for(int i=1; i<=s; i++)
			printf(" ");
		for(int k=6-s; k>=1; k--)	
			printf("%d",k);
		for(int h=1; h<=6-s; h++)
			printf("%d",h);
		printf("\n");
	}
	
	printf("____________________________________________________________\n\n");
	
	// Rakamlarla i�i bo� e�kenar ��gen �izimi
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
