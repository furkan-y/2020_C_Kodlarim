#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/* De�er d�nd�ren fonksiyonlar

Cmd ekran�nda d�ng� d�nerken Ctrl+C kapat�r "Pause Break" d�ng�y� k�rar

Fonksiyonlar� main'den sonra yazd���m�z i�in �nce prototip tan�tmam�z gerekiyor */
	
int us();
int topla();
int carp();
int kare();
int kadar();
int fakt();

int main()
{	setlocale(LC_ALL,"Turkish");
	
	int a,b,c,d;
	printf("2 say� giriniz: "); scanf("%d%d",&a,&b); 
	printf("%d �zeri %d= %d",a,b,us(a,b));
	printf("\nToplamlar�: %d",topla(a,b));
	printf("\n�arp�mlar�: %d",carp(a,b));
	printf("\nToplamlar�n�n karesi: %d",kare(topla(a,b)));
	
	printf("\n\nBir say� giriniz: "); scanf("%d",&c);
	printf("Girdi�iniz say�ya kadar olan say�lar�n toplam�: %d",kadar(c));
	
	printf("\n\nFakt�riyeli al�nacak bir say� giriniz: "); scanf("%d",&d);
	printf("Girdi�iniz say�n�n fakt�riyeli de�eri: %d",fakt(d));

	getch();
}

int us(int x,int y)
{
	return pow(x,y);
}
int topla(int x,int y)
{
	return x+y;
}
int carp(int x,int y)
{
	return x*y;
}
int kare(int x)
{
	return x*x;
}
int kadar(int x)
{
	int toplam=0;
	for(int i=1; i<=x; i++)
		toplam+=i;
	return toplam;
}
int fakt(int x)
{
	int sonuc=1;
	for(int i=1; i<=x; i++)
		sonuc*=i;
	return sonuc;
}
