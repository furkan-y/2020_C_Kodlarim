#include <stdio.h>
#include <conio.h>
#include <locale.h>

// 50 ile 150 arasýnda kaç adet tek ve çift sayý olduðunu ve bunlarýn toplamlarýný fonksiyon içinde yazdýran program

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
	printf("50 ile 150 arasýnda %d adet tek sayý vardýr",tek_sayac);
	printf("\n50 ile 150 arasýndaki tek sayýlarýn toplamý: %d",tek_toplam);
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
	printf("\n\n50 ile 150 arasýnda %d adet çift sayý vardýr",cift_sayac);
	printf("\n50 ile 150 arasýndaki çift sayýlarýn toplamý: %d",cift_toplam);
}


