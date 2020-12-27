#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Ters eþkenar üçgenin 1'den 7'ye rakamlarla çizimi
	for (int s=1; s<=4; s++)
	{
		for(int i=1; i<=s; i++)
			printf(" ");
		for(int d=s; d<=8-s; d++)
			printf("%d",d);
		printf("\n");
	}
	
	// Ters eþkenar üçgenin 7'den 1'e rakamlarla çizimi
	for (int s=1; s<=4; s++)
	{
		for(int i=1; i<=s; i++)
			printf(" ");
		for(int k=8-s; k>=s; k--)
			printf("%d",k);
		printf("\n");
	}
	printf("____________________________________________________________\n\n");
	
	// Ters eþkenar üçgenin 5'den 1'e 1'den 5'e rakamlarla çizimi
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
		
	// Binom&Pascal üçgeni yazdýrma
	for(int i=0; i<=10; i++)
	{
		for(int j=0; j<=i; j++)
		{
			int nf=1;
			for(int p=1; p<=i; p++) 
			{
				nf*=p;
			}
			int kf=1;
			for(int p=1; p<=j; p++)
			{
				kf*=p;
			}
			int nkf=1;
			for(int p=1; p<=i-j; p++)
			{
				nkf*=p;
			}
			printf("%d ",nf/(kf*nkf));
		}
		printf("\n");
	}

	getch();
}
