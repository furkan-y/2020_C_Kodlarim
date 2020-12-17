#include <stdio.h>	// Standard input output (Temel C komutlar�n� bar�nd�r�r)
#include <conio.h>	// Windows i�letim sisteminde gerekli 
#include <locale.h> // T�rk�e dil k�t�phanesi (T�rk�e karakterler kullanabilmek i�in)

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int i = 10; 
	short int si = 20;
	long int li = 30; //Daha b�y�k yer kaplayan integer
	double pi = 3.1415; //Daha b�y�k floatlar i�indir
	float f = 2.12; 
	char c = 'A'; //Tek harf girilebilir
	
	// Format Belirleyici
	printf("%d %d %d %.2f %.2f %c \n\n", i,si,li,pi,f,c); // %.2f ifadesi virg�lden sonra 2 hane al demektir
	
	printf("%d \n", 10 + 4);
	printf("%d \n", 10 - 4); 
	printf("%d \n", 10 * 4);
	printf("%.2f \n", (float)10 / 4.0); //B�l�nen ya da b�lenden biri .0 almak ya da float olmak zorundad�r 
	printf("%d \n\n\n", 10 % 4); // Modunu alma (10'un 4 ile b�l�m�nden kalan)
	
	
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
