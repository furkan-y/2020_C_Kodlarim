#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Ekrana �arp�m tablosu yazd�rma
	for(int i=1; i<=10; i++)
	{
		for(int j=1; j<=10; j++)
			printf("%d\t",i*j);
		printf("\n");
	}
	
	// 5 kere s�rayla Haydar kelimesini yazd�r�rken 3.'y� atla
	for(int i=1; i<=10; i++)
	{
		if(i==3)
			continue; // continue komutu kendinden sonraki t�m komutlar� atlar }'e gider
		if(i==7)
			break; // D�ng�y� bitirir. i 10'a kadar gidecekken 6.'dan sonras�n� yazd�rtmaz
		printf("%d. ",i);
		printf("Haydar\n");
	}
	
	getch();
}
