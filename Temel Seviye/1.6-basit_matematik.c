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
	
	int a=16;
	int b=sqrt(a); // sqrt() parantez i�inin karek�k�n� al�r
	printf("\n%d",b);
	
	int taban=5, us=2;
	int sonuc=pow(taban,us);  // 2 �zeri 5, �s alma
	printf("\n%d'in %d'inci kuvveti: %d",taban,us,sonuc);
	
	printf("\n___________________________________________________\n");
	
	int deger,son;
	printf("Bir de�er giriniz: ");
	scanf("%d",&deger);
	printf("Girdi�iniz say�n�n karesi: %d",deger*deger);
	son=pow(deger,2);
	printf("\nGirdi�iniz say�n�n karesi: %d",son);
	
	int sayi; float sonc;
	printf("\n\nBir tamsay� giriniz: ");
	scanf("%d",&sayi),
	sonc=sqrt(sayi);
	printf("Girdi�iniz say�: %d karek�k�: %f",sayi,sonc);
	
	
	getch();
}
