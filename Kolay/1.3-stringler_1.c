#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h> // Stringleri(dizileri) kullanmak i�in gerekli k�t�phane


	// Bir c�mlenin uzunlu�unun ka� karakter oldu�unu hesaplama
int main()
{	setlocale(LC_ALL,"Turkish");
	
	char *str="Bu c�mlenin uzunlu�unun ka� karakter oldu�unu hesaplayacak"; 
	// de�i�kenin ba��na *konmu�sa kapasite maksimumdur, genelde tercih etmiyoruz
	char str2[50]="Bilgisayar Programc�l���";
	printf("%d",strlen(str)); // strlen=Stringlenght
	printf("\n%d",strlen(str2));
	
	printf("\n\n");
	
	// Kullan�c�dan al�nan c�mledeki kelime ve a harfi say�s�n� yazd�ran program
	char sentence[100];  
	int sayac=0, kelime=0;
	printf("Bir c�mle giriniz: ");
	gets(sentence);
	for(int i=0; i<strlen(sentence); i+=1)	
	{
		if(sentence[i]=='a')
			sayac+=1;
		if(sentence[i]==' ')
			kelime+=1;
	}
	printf("C�mledeki a say�s�: %d",sayac);
	printf("\nKelime say�s� %d\n\n",kelime+1);
	
	// Index'lere tek tek harf atama
	char isim[]={'T','u','g','c','e'};
	printf("%s\n\n",isim);

	// Kullan�c�dan al�nan c�mleyi �nce aynen sonra yukardan a�a�� yazd�ran program
	char cumle[100];
	printf("Bir c�mle giriniz: ");
	gets(cumle);
	printf("\n%s",cumle);
	for(int i=0; i<strlen(cumle); i+=1)
		printf("\n%c",cumle[i]);


	getch();
}
