#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	
// 4 sat�r 6 s�tundan olu�an matris i�ini 1'den 100'e kadar sartgele say�larla doldur ve yazd�r
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

// 3 sat�r 4 s�tunluk matrisi kullan�c�dan ald���n say�lar ile doldur ve yazd�r

	int matris[3][4];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			printf("[%d][%d] s�ral� matris de�erini giriniz: ",i,j);	scanf("%d",&matris[i][j]);
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
