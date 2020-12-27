#include <stdio.h>
#include <conio.h>
#include <locale.h>

// 50'den 150'ye kadar olan tek ve çift sayýlarýn toplamýný ayrý ayrý yazdýran program

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
	for(int i=51; i<=150; i+=2)
		tek_toplam+=i;
	printf("Teklerin toplamý %d",tek_toplam);
}
void cift()
{
	int cift_toplam=0;
	for(int i=50; i<=150; i+=2)
		cift_toplam+=i;
	printf("\nÇiftlerin toplamý %d",cift_toplam);
}


