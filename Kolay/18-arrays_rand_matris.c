#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	
// 4 satýr 6 sütundan oluþan matris içini 1'den 100'e kadar sartgele sayýlarla doldur ve yazdýr
	int array[4][6];
	for(int i=0; i<4; i++)
		for(int j=0; j<6; j++)
			array[i][j]=1+rand()%100;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<6; j++)
			printf("%d\t",array[i][j]);
		printf("\n");
	}
	
printf("_______________________________________________________________\n\n");

// 3 satýr 4 sütunluk matrisi kullanýcýdan aldýðýn sayýlar ile doldur ve yazdýr

	int matris[3][4];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			printf("[%d][%d] sýralý matris deðerini giriniz: ",i,j);	scanf("%d",&matris[i][j]);
		}
		printf("\n");
	}
	for(int a=0; a<3; a++)
	{
		for(int b=0; b<4; b++)
		{
			printf("%d\t",matris[a][b]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	getch();
}
