#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
// Sol alt k��eden sa� �st k��eye giden say�lar� a�a��dan �apraz yukar� do�ru k���kten b�y��e s�rala
	
	int matris[10][10];
	int deger;
	for(int i=0; i<10; i++)
	 for(int j=0; j<10; j++)
		matris[i][j]=1+rand()%99;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			printf("%d\t",matris[i][j]);
		}
	printf("\n");
	}
	
	printf("\n_____________________________________________________________________________\n\n");
	
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(matris[9-i][i]<matris[9-j][j])
			{
				deger=matris[9-i][i];
				matris[9-i][i]=matris[9-j][j];
				matris[9-j][j]=deger;
			}
		}
	}
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			printf("%d\t",matris[i][j]);
		}
	printf("\n");
	}
		
	getch();
}
