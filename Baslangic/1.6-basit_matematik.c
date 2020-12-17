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
	
	
	// Girilen deðerin karesini yazdýran program
	int deger,son;
	printf("\n\nBir deðer giriniz: ");
	scanf("%d",&deger);
	printf("Girdiðiniz sayýnýn karesi: %d",deger*deger);
	son=pow(deger,2);
	printf("\nGirdiðiniz sayýnýn karesi: %d",son);
	
	
	// Girilen deðerin karekökünü yazdýran program
	int sayi; float sonc;
	printf("\n\nBir tamsayý giriniz: ");
	scanf("%d",&sayi),
	sonc=sqrt(sayi);	// sqrt() parantez içinin karekökünü alýr
	printf("Girdiðiniz sayýnýn karekökü: %f",sayi,sonc);
	
	
	// Taban ve üssü kullanýcýdan alýp sonucu yazdýran program
	int taban,us;
	printf("\n\nTabaný giriniz: ");
	scanf("%d",&taban);
	printf("\nDerecesi: ");
	scanf("%d",&us);
	int sonuc=pow(taban,us);  // 
	printf("\n\n%d sayýsýnýn %d. dereceden kuvveti: %d",taban,us,sonuc);
	
	getch();
}
