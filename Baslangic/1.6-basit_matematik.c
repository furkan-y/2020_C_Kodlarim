#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>	// Matematiksel i�lemler i�in gerekli

int main()
{	setlocale(LC_ALL,"Turkish");
	
	float x=4.7, y=4.3, z=4.0;
	x=floor(x); // floor(zemin) say�y� virg�lden �nceki tam say�ya yuvarlar
	printf("%f",x);
	
	y=ceil(y); //  ceil(tavan) say�y� yukar� yuvarlar
	z=ceil(z); // 4.0'� ve 4'� yukar� yuvarlamaz
	printf("\n%f, %f",y,z);
	
	
	// Girilen de�erin karesini yazd�ran program
	int deger,son;
	printf("\n\nBir de�er giriniz: ");
	scanf("%d",&deger);
	printf("Girdi�iniz say�n�n karesi: %d",deger*deger);
	son=pow(deger,2);
	printf("\nGirdi�iniz say�n�n karesi: %d",son);
	
	
	// Girilen de�erin karek�k�n� yazd�ran program
	int sayi; float sonc;
	printf("\n\nBir tamsay� giriniz: ");
	scanf("%d",&sayi),
	sonc=sqrt(sayi);	// sqrt() parantez i�inin karek�k�n� al�r
	printf("Girdi�iniz say�n�n karek�k�: %f",sayi,sonc);
	
	
	// Taban ve �ss� kullan�c�dan al�p sonucu yazd�ran program
	int taban,us;
	printf("\n\nTaban� giriniz: ");
	scanf("%d",&taban);
	printf("\nDerecesi: ");
	scanf("%d",&us);
	int sonuc=pow(taban,us);  // 
	printf("\n\n%d say�s�n�n %d. dereceden kuvveti: %d",taban,us,sonuc);
	
	getch();
}
