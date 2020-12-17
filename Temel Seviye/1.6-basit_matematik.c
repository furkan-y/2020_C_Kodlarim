#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>	// Matematiksel iþlemler için gerekli

int main()
{	setlocale(LC_ALL,"Turkish");
	
	float x=4.7, y=4.3, z=4.0;
	x=floor(x); // floor(zemin) sayýyý virgülden önceki tam sayýya yuvarlar
	printf("%f",x);
	
	y=ceil(y); //  ceil(tavan) sayýyý yukarý yuvarlar
	z=ceil(z); // 4.0'ý ve 4'ü yukarý yuvarlamaz
	printf("\n%f, %f",y,z);
	
	int a=16;
	int b=sqrt(a); // sqrt() parantez içinin karekökünü alýr
	printf("\n%d",b);
	
	int taban=5, us=2;
	int sonuc=pow(taban,us);  // 2 üzeri 5, üs alma
	printf("\n%d'in %d'inci kuvveti: %d",taban,us,sonuc);
	
	printf("\n___________________________________________________\n");
	
	int deger,son;
	printf("Bir deðer giriniz: ");
	scanf("%d",&deger);
	printf("Girdiðiniz sayýnýn karesi: %d",deger*deger);
	son=pow(deger,2);
	printf("\nGirdiðiniz sayýnýn karesi: %d",son);
	
	int sayi; float sonc;
	printf("\n\nBir tamsayý giriniz: ");
	scanf("%d",&sayi),
	sonc=sqrt(sayi);
	printf("Girdiðiniz sayý: %d karekökü: %f",sayi,sonc);
	
	
	getch();
}
