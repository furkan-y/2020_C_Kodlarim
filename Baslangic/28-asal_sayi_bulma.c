#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL, "Turkish");
	
	// Girilen say�n�n asal olup olmad���n� yazd�ran program
	int sayi,sayac=0;

	printf("Bir say� giriniz: ");
	scanf("%d",&sayi);
	for(int i=2; i<sayi; i++)
		if(sayi%i==0)
			sayac++;
		if(sayac==0)
			printf("Say� asald�r");
		if(sayac>0)
			printf("Say� asal de�ildir");
	
	// bu program anlat�m i�indir yoksa negatifleri, 0 ve 1'i de asal olarak kabul eder
	
	getch();
}
