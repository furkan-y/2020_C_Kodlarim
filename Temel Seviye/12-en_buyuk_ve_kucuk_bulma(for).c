#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Klavyeden girilen 5 say�dan en b�y���n� ve en k�����n� for d�ng�s� kullanarak yazd�ran program
	int sayi,max,min;
	
	for(int i=0; i<5; i++)  // D�ng�y� 5 kez d�nderiyoruz
	{
		printf("Bir say� giriniz: ");
		scanf("%d",&sayi);
		if(sayi>max) // if ; g�rene kadar �al���r, sadece 1 sat�r yazacaksak {} gerekmez
		max=sayi;
		if(sayi<min)
		min=sayi;
	}
	printf("En b�y�k say�: %d",max);
	printf("En k���k say�: %d",min);
	
	getch();
}
