#include <stdio.h>
#include <conio.h>
#include <locale.h> 
// Java,C,C#'da "[]" g�r�rseniz array(dizi)ler ile bir i�lem yap�l�yordur. C syntax dillerde index 0'dan ba�lar 

int main()
{	setlocale(LC_ALL,"Turkish");

	// 1'den 9'a kadar olan say�lar� diziye atay�p yazd�ran kod
	
	int dizi[10]; // 10 elemanl�k bir dizi tan�mla
	for(int i=0; i<10; i++)  // 0'dan 9'a kadar d�nen bir d�ng� olu�tur
	{
		dizi[i]=i; // a dizisinin i. eleman�na i de�eri koyuluyor
    	printf("%d. index: %d\n",i,dizi[i]);
	}
	
	// Array i�ine 6 say� koyup tersten index hanesiyle beraber yazd�r
	int a[6] = {2,3,9,8,15,-6}; // Ka� elemanl� oldu�u e�itli�in sa��nda oldu�u i�in [] i�ine 6 karakterdir yazmaya gerek yok
	for(int j=5; j>=0; j--)
		printf("\n%d.index: %d",j,a[j]);
		
		
	printf("\n_______________________________________________________\n\n");
	
	
	/* 2 Boyutlu diziler "1 2 3" gibi matrislerdir. Bu matrisi haf�zada tutmak i�in iki farkl� boyuttaki boyut de�erleri tan�mlanmal�d�r.
						  4 5 6  soldaki matris �rne�ini yazd�r.																	*/
	
	int matris[2][3]={{1,2,3},{4,5,6}};
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d  ",matris[i][j]);
		}
		printf("\n");
	}

	getch();
}
