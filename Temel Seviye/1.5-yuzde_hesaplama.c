#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
// Kullanýcýdan 2 sayý alýp yüzdesini hesaplama 
	
	float a,b,sonuc;
	printf("Yüzdesini almak istediðiniz sayýyý giriniz: ");
	scanf("%f",&a);
	printf("Yüzde kaçýný almak istiyorsunuz: ");
	scanf("%f",&b);
	
	sonuc=a*b/100;
	printf("%f",sonuc);
	printf("\n Programýn sonunda uyarý sesi çýkar \a");
	
	
    getch();
}
