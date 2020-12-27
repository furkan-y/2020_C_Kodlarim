#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

/* Deðer döndürmeyen -void- fonksiyonlar;
 1. Parametre almayýp deðer döndürmeyen
	void sonuc()
	Bu fonksiyonlar daha çok bir mesaj vermek veya kontrol için kullanýlýrlar
 2. Parametre alýp geriye deðer döndürmeyen
	void sonuc(int sayi)	
	
	deðer döndürmeyen void fonksiyonlarda return kullanýlmaz döndüren fonksiyonlarda deðer döndürmek için kullanýlýr	*/
	


// Fonksiyonlarý main'den sonra yazdýðýmýz için önce prototip tanýtmamýz gerekiyor
void mesaj();
void zar_at();
void dongu();
void satiratla();

void kontrol_et(int sayi);
void kutu(int boy,int en);

int main()
{	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	
	mesaj();	// Deðer döndürmeyen fonksiyonlarý ismiyle çaðýrmanýz yeterlidir
	zar_at();
	dongu();
	satiratla();
	
	int s;
	printf("Bir sayý giriniz: "); scanf("%d",&s);
	kontrol_et(s);
	int satir,sutun;
	printf("\n\nKutunun boy deðerini giriniz: "); scanf("%d",&satir);
	printf("Kutunun en deðerini giriniz: "); scanf("%d",&sutun);
	kutu(satir,sutun);
}

 // Parametre almayýp deðer döndürmeyen fonksiyona örnekler
 
void mesaj()
{
	printf("Merhaba Dünya");
}
// Bir zar atýp ekrana yazdýrýyoruz
void zar_at()
{
	int deger=1+rand()%6;
	printf("\nZar %d geldi\n",deger);
}
// Satýr atlama fonksiyonu
void satiratla()
{
	printf("\n\n");
}

// 0'dan 10'a kadar sayýlarý yazdýran fonksiyon
void dongu()
{
	for(int i=0; i<=10; i++)
	{
		printf("%d ",i);
	}
}


 // Parametre alýp deðer deðer döndürmeyen fonksiyona örnekler

// Kullanýcýdan alýnan sayý tek mi çift mi ekrana yazdýrma
void kontrol_et(int sayi)
{
	if(sayi%2==0)
	printf("%d Sayýsý çifttir",sayi);
	else
	printf("%d Sayýsý tektir",sayi);
}

// Ekrana *'lardan kutu çizme
void kutu(int boy,int en)
{
	for(int i=1; i<=boy; i++)
	{
		for(int j=1; j<=en; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

