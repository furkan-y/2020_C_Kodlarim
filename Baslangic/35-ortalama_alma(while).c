#include <stdio.h>
#include <conio.h>
#include <locale.h>

// kullan�c�dan say�lar alarak -1 girilene kadar girilen say�lar�n ortalamas�n� yazd�ran program

int main()
{	setlocale(LC_ALL,"Turkish");
	
	int toplam=1;
	int sayac=-1;
	int sayi;
	
	while(sayi!=-1)
	{
		printf("Bir say� giriniz: "); scanf("%d",&sayi);
		sayac++;
		toplam+=sayi;
	}
	printf("Ortalama: %f",(float)toplam/sayac);
	getch();
}
