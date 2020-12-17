#include <stdio.h>	// Standard input output (Temel C komutlarýný barýndýrýr)
#include <conio.h>	// Windows iþletim sisteminde gerekli 
#include <locale.h> // Türkçe dil kütüphanesi (Türkçe karakterler kullanabilmek için)

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int i = 10; 
	short int si = 20;
	long int li = 30; //Daha büyük yer kaplayan integer
	double pi = 3.1415; //Daha büyük floatlar içindir
	float f = 2.12; 
	char c = 'A'; //Tek harf girilebilir
	
	// Format Belirleyici
	printf("%d %d %d %.2f %.2f %c \n\n", i,si,li,pi,f,c); // %.2f ifadesi virgülden sonra 2 hane al demektir
	
	printf("%d \n", 10 + 4);
	printf("%d \n", 10 - 4); 
	printf("%d \n", 10 * 4);
	printf("%.2f \n", (float)10 / 4.0); //Bölünen ya da bölenden biri .0 almak ya da float olmak zorundadýr 
	printf("%d \n\n\n", 10 % 4); // Modunu alma (10'un 4 ile bölümünden kalan)
	
	
	int a = 10;
	int b = 20;
	int k = 5, l = 5;
	a = a+1;
	a += 1; 
	a++;
	b = b - 1;
	b -= 1;
	b--;
	printf("a=%d b=%d k=%d \n", a, b, k); 
	printf("k=%d k=%d %d=Prefix \n", k--, k, --l); // k--(Postfix), --k(Prefix)
	
	getchar();
}
