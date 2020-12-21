#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Ekrana çarpým tablosu yazdýrma
	for(int i=1; i<=10; i++)
	{
		for(int j=1; j<=10; j++)
			printf("%d\t",i*j);
		printf("\n");
	}
	
	// 5 kere sýrayla Haydar kelimesini yazdýrýrken 3.'yü atla
	for(int i=1; i<=10; i++)
	{
		if(i==3)
			continue; // continue komutu kendinden sonraki tüm komutlarý atlar }'e gider
		if(i==7)
			break; // Döngüyü bitirir. i 10'a kadar gidecekken 6.'dan sonrasýný yazdýrtmaz
		printf("%d. ",i);
		printf("Haydar\n");
	}
	
	getch();
}
