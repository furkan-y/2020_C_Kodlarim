#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
// Kullan�c�dan 2 say� al�p y�zdesini hesaplama 
	
	float a,b,sonuc;
	printf("Y�zdesini almak istedi�iniz say�y� giriniz: ");
	scanf("%f",&a);
	printf("Y�zde ka��n� almak istiyorsunuz: ");
	scanf("%f",&b);
	
	sonuc=a*b/100;
	printf("%f",sonuc);
	printf("\n Program�n sonunda uyar� sesi ��kar \a");
	
	
    getch();
}
