#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define n 5		// program n g�rd��� yere 5'i atayacak
#define m 5				


/* Fonksiyona dizi g�ndermek, En b�y�k say�y� bulma

DonusTipi FonksiyonAdi(tip dizi[],tip boyut)
{
	i�lemler...
} 																		*/

void maximumbul();
void notoku();
double ort();

int main()
{	setlocale(LC_ALL,"Turkish");
	
	int diziAdi[n];
	maximumbul(diziAdi,n);
	int readnote[m];
	notoku(readnote,m);
	ort(readnote,m);
	
	getch();
}

void maximumbul(int dizi[],int boyut)	// De�er d�nd�rmeyen fonksiyon yazd�rd�k
{
	int max=0;
	for(int i=1; i<=boyut; i++)
	{
		printf("%d. de�er: ",i); scanf("%d",&dizi[i]);
		if(dizi[i]>max)
		{
			max=dizi[i];
		}
	}
	printf("Maximum de�er: %d\n\n",max);
}

void notoku(int readnot[],int boyut2)
{
	for(int i=1; i<=boyut2; i++)
	{
		printf("%d. ��rencinin notu: ",i); scanf("%d",&readnot[i]);
	}
	printf("\n");
	for(int i=1; i<=boyut2; i++)
	{
		printf("%d. ��rencinin notu: %d\n",i,readnot[i]);
	}
}
double ort(int readnot[],int boyut2)
{
	int toplam=0;
	for(int i=1; i<=boyut2; i++)
	{
		toplam+=readnot[i];
	}
	double ort=toplam/boyut2;
	printf("S�n�f�n ortalama notu: %.2lf",ort);
	return ort;
}
