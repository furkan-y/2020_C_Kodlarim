#include <stdio.h>
#include <conio.h>
#include <locale.h>

/* C ve Pascal gibi eski dillerde 'fonksiyon', Object oriented dillerde(C#, C++, Java) gibi dillerde metot denir.
 Main'de fonksiyonla iþlem yapacaðýmýz için içeriði olmasa da önceden prototip olarak fonksiyonu tanýmlamamýz gerekiyor.
 Bu prototip tanýmlama iþlemi object oriented dillerde genelde yoktur. */
 
 // Kullanýcýdan alýnan sayýnýn faktöriyelini yazdýran program
int fact(); // <-- Prototip

int main()
{	setlocale(LC_ALL,"Turkish");

	int x;
	printf("Bir sayý giriniz: ");
	scanf("%d",&x);
	printf("Sayýnýn faktöriyeli: %d",fact(x));
	getch();
}

int fact(int x)	// Burada prototip'de tanýmlayacaðýz dediðimiz fact fonksiyonunu tanýmlýyoruz. "int" fonksiyonun dönüþ tipi. "fact" fonksiyonun ismi.
{
	int sonuc=1;
	for(int i=1; i<=x; i++)
		sonuc*=i;
	return sonuc;
}
	
