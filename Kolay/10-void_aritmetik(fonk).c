#include <stdio.h>
#include <conio.h>
#include <locale.h>

// 50 ile 150 aras�nda ka� adet tek ve �ift say� oldu�unu ve bunlar�n toplamlar�n� fonksiyon i�inde yazd�ran program

void tek();
void cift();

int main()
{	setlocale(LC_ALL, "Turkish");
	
	tek();
	cift();
}

void tek()
{
	int tek_toplam=0;
	int tek_sayac=0;
	for(int i=51; i<150; i+=2)
	{
		tek_toplam+=i;
		tek_sayac++;
	}
	printf("50 ile 150 aras�nda %d adet tek say� vard�r",tek_sayac);
	printf("\n50 ile 150 aras�ndaki tek say�lar�n toplam�: %d",tek_toplam);
}

void cift()
{
	int cift_toplam=0;
	int cift_sayac=0;
	for(int i=52; i<150; i+=2)
	{
		cift_toplam+=i;
		cift_sayac++;
	}
	printf("\n\n50 ile 150 aras�nda %d adet �ift say� vard�r",cift_sayac);
	printf("\n50 ile 150 aras�ndaki �ift say�lar�n toplam�: %d",cift_toplam);
}


