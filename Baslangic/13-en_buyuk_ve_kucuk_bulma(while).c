#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	// Klavyeden girilen 5 say�dan en b�y���n� ve en k�����n� while d�ng�s� kullanarak yazd�ran program
	int sayi,max,min; 
	int sayac=0; // Loop variable(d�ng� de�i�keni) while d�ng�s�nde d�ng�den �nce atanmal�d�r
	
	while(sayac<=5)
	{
		printf("Bir say� giriniz: ");
		scanf("%d",&sayi);
		if(sayi>max)
			max=sayi;
		if(sayi<min)
			min=sayi;
		sayac+=1;
	}
	printf("En b�y�k de�er: %d\n",max);
	printf("En k���k de�er: %d\n\n\n",min);


	// 0 girilene kadar girilen say�lar�n ortalamas�n� yazd�ran program	
	int deger,sayacc=-1,toplam=1;
	while(deger!=-1)
	{
		printf("Bir say� giriniz[!-1]: ");
		scanf("%d",&deger);
		toplam+=deger;
		sayacc++;
	}
	printf("Say�lar�n ortalamas�: %d",toplam/sayacc);
	
	getch();
}
