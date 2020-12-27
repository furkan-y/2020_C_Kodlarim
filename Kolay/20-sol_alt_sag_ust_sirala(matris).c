#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
// Sol alt köþeden sað üst köþeye giden sayýlarý aþaðýdan çapraz yukarý doðru küçükten büyüðe sýrala
	
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
