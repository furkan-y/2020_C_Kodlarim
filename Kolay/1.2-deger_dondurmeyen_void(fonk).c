#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

/* De�er d�nd�rmeyen -void- fonksiyonlar;
 1. Parametre almay�p de�er d�nd�rmeyen
	void sonuc()
	Bu fonksiyonlar daha �ok bir mesaj vermek veya kontrol i�in kullan�l�rlar
 2. Parametre al�p geriye de�er d�nd�rmeyen
	void sonuc(int sayi)	
	
	de�er d�nd�rmeyen void fonksiyonlarda return kullan�lmaz d�nd�ren fonksiyonlarda de�er d�nd�rmek i�in kullan�l�r	*/
	


// Fonksiyonlar� main'den sonra yazd���m�z i�in �nce prototip tan�tmam�z gerekiyor
void mesaj();
void zar_at();
void dongu();
void satiratla();

void kontrol_et(int sayi);
void kutu(int boy,int en);

int main()
{	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	
	mesaj();	// De�er d�nd�rmeyen fonksiyonlar� ismiyle �a��rman�z yeterlidir
	zar_at();
	dongu();
	satiratla();
	
	int s;
	printf("Bir say� giriniz: "); scanf("%d",&s);
	kontrol_et(s);
	int satir,sutun;
	printf("\n\nKutunun boy de�erini giriniz: "); scanf("%d",&satir);
	printf("Kutunun en de�erini giriniz: "); scanf("%d",&sutun);
	kutu(satir,sutun);
}

 // Parametre almay�p de�er d�nd�rmeyen fonksiyona �rnekler
 
void mesaj()
{
	printf("Merhaba D�nya");
}
// Bir zar at�p ekrana yazd�r�yoruz
void zar_at()
{
	int deger=1+rand()%6;
	printf("\nZar %d geldi\n",deger);
}
// Sat�r atlama fonksiyonu
void satiratla()
{
	printf("\n\n");
}

// 0'dan 10'a kadar say�lar� yazd�ran fonksiyon
void dongu()
{
	for(int i=0; i<=10; i++)
	{
		printf("%d ",i);
	}
}


 // Parametre al�p de�er de�er d�nd�rmeyen fonksiyona �rnekler

// Kullan�c�dan al�nan say� tek mi �ift mi ekrana yazd�rma
void kontrol_et(int sayi)
{
	if(sayi%2==0)
	printf("%d Say�s� �ifttir",sayi);
	else
	printf("%d Say�s� tektir",sayi);
}

// Ekrana *'lardan kutu �izme
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

