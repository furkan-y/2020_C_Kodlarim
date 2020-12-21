#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL, "Turkish");
	
	// Girilen sayýnýn asal olup olmadýðýný yazdýran program
	int sayi,sayac=0;

	printf("Bir sayý giriniz: ");
	scanf("%d",&sayi);
	for(int i=2; i<sayi; i++)
		if(sayi%i==0)
			sayac++;
		if(sayac==0)
			printf("Sayý asaldýr");
		if(sayac>0)
			printf("Sayý asal deðildir");
	
	// bu program anlatým içindir yoksa negatifleri, 0 ve 1'i de asal olarak kabul eder
	
	getch();
}
