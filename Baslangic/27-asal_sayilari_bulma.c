#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL, "Turkish");
	
	// 0 girilene kadar girilen say�n�n asal olup olmad���n� yazd�ran program
	int sayi,sayac=0;
	do
	{
		printf("Bir do�al say� giriniz[!0]: ");
		scanf("%d",&sayi);
		for(int i=2; i<sayi; i++) // Asal say� bulmak i�in klasik for d�ng�s�
			if(sayi%i==0)	// Kendinden k���k say�larla mod'u 0 ise asal de�ildir
				sayac++;
			if(sayi==1)		// Program�n tam do�rulu�u i�in 1 ve 0'� �zel ekledik
				sayac++;
			if(sayi==0)
				sayac++;
			if(sayac==0)
				printf("Say� Asald�r\n");
			if(sayac>0)
				printf("Asal De�ildir\n");
			sayac=0;
	}while(sayi!=0);
	
	getch();
}
