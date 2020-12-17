#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	// Pi sayýsýný virgülden sonraki 3 hanesiyle isteyen ve söyleyen program	
	float deger, pi=3.1415;
	printf("Lütfen pi sayýsýný virgülden sonraki 3 hanesiyle beraber giriniz: ");
	scanf("%f",&deger); // scanf deðer çekmeye yarar
	printf("Girdiðiniz deðer: %.3f \t Doðru cevap: %.3f",deger,pi);  
	// %.3f ifadesi virgülden sonra 3 hane yazdýrmaya yarar. \t 1 tab boþluk býraktýrýr
	
    getch();
}
