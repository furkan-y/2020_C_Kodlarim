#include <stdio.h>
#include <conio.h>
#include <locale.h>

/* C ve Pascal gibi eski dillerde 'fonksiyon', Object oriented dillerde(C#, C++, Java) gibi dillerde metot denir.
 Main'de fonksiyonla i�lem yapaca��m�z i�in i�eri�i olmasa da �nceden prototip olarak fonksiyonu tan�mlamam�z gerekiyor.
 Bu prototip tan�mlama i�lemi object oriented dillerde genelde yoktur. */
 
 // Kullan�c�dan al�nan say�n�n fakt�riyelini yazd�ran program
int fact(int); // <-- Prototip. "int" fonksiyonun d�n�� tipi. "fact" fonksiyonun ismi
int main()
{	setlocale(LC_ALL,"Turkish");

	int x;
	printf("Bir say� giriniz: ");
	scanf("%d",&x);
	printf("Say�n�n fakt�riyeli: %d",fact(x));
	printf("\nGirilen say�n�n fakt�riyelinin fakt�riyeli + 5 fakt�riyel: %d",fact(fact(x))+fact(5)); // 3'e kadar alabilirsin sonras� integer'a s��maz
	getch();
}

int fact(int x)	// Burada prototip'de tan�mlayaca��z dedi�imiz fact fonksiyonunu tan�ml�yoruz 
{
	int sonuc=1;
	for(int i=1; i<=x; i++)
		sonuc*=i;
	return sonuc;
}
	
