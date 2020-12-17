#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{	setlocale(LC_ALL,"Turkish");

// Bir havuzu a musluðu 3, b musluðu 8 ve c musluðu 12 saatte dolduruyor ise 3 musluk beraber kaç saatte doldurur
	float saat= 1.0/3.0 + 1.0/8.0 + 1.0/12.0;
	printf("%f saatte doldurur",1/saat);
	printf("\n%f dakikada doldurur",1/saat*60);
	
// Kullanýcýdan a,b ve c sayýlarýný alarak a*2+b*2+3c iþlemini yapan kodu yazýn.
	int a,b,c;
	printf("\n\na,b ve c deðerlerini sýrayla giriniz: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nDenklem sonucu 1: %d",a*a+b*b+3*c);
	a=pow(a,2);
	b=pow(b,2);
	printf("\nDenklem sonucu 2: %d\n\n",a+b+3*c);
	
	getch();
}
