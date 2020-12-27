#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
	// 10'a 10'luk 2 boyutlu matriste sol esas köþegenleri saða sað esas köþegenleri sola yazdýran program

	int matris[10][10];
	int deger=0, kayit1,kayit2,kayit3,kayit4;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			deger=1+rand()%99;
			matris[i][j]=deger;
		}
	}
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			printf("  %d\t",matris[i][j]);
		}
		printf("\n");
	}
	
	printf("\n_______________________________________________________________________________________________________\n\n");
	
	kayit1=matris[0][9];
	matris[0][9]=matris[0][0];
	matris[0][0]=kayit1;
	kayit2=matris[9][0];
	matris[9][0]=matris[9][9];
	matris[9][9]=kayit2;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			printf("  %d\t",matris[i][j]);
		}
		printf("\n");
	}
	
	getch();
}
