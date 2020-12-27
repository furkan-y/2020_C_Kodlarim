#include <stdio.h>
#include <conio.h>
#include <locale.h>

// kullanýcýdan sayýlar alarak -1 girilene kadar girilen sayýlarýn ortalamasýný yazdýran program

int main()
{	setlocale(LC_ALL,"Turkish");
	
	int toplam=1;
	int sayac=-1;
	int sayi;
	
	while(sayi!=-1)
	{
		printf("Bir sayý giriniz: "); scanf("%d",&sayi);
		sayac++;
		toplam+=sayi;
	}
	printf("Ortalama: %f",(float)toplam/sayac);
	getch();
}
