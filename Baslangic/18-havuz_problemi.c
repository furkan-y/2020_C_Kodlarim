#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{	setlocale(LC_ALL,"Turkish");

// Bir havuzu a muslu�u 3, b muslu�u 8 ve c muslu�u 12 saatte dolduruyor ise 3 musluk beraber ka� saatte doldurur
	float saat= 1.0/3.0 + 1.0/8.0 + 1.0/12.0;
	printf("%f saatte doldurur",1/saat);
	printf("\n%f dakikada doldurur",1/saat*60);
	
// Kullan�c�dan a,b ve c say�lar�n� alarak a*2+b*2+3c i�lemini yapan kodu yaz�n.
	int a,b,c;
	printf("\n\na,b ve c de�erlerini s�rayla giriniz: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nDenklem sonucu 1: %d",a*a+b*b+3*c);
	a=pow(a,2);
	b=pow(b,2);
	printf("\nDenklem sonucu 2: %d\n\n",a+b+3*c);
	
	getch();
}
