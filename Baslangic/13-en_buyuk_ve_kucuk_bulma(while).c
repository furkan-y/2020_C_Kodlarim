#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	// Klavyeden girilen 5 say�dan en b�y���n� ve en k�����n� while d�ng�s� kullanarak yazd�ran program
	int sayi,max,min,sayac=0;
	
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
	printf("En k���k de�er: %d",min);
	
	getch();
}
