#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
// Klavyeden girilen 5 say�dan en b�y���n� for d�ng�s� yazd�ran program

	int sayi,max=0;
	
	for(int i=0; i<5; i++)  // D�ng�y� 5 kez d�nderiyoruz
	{
		printf("Bir say� giriniz: ");
		scanf("%d",&sayi);
		if(sayi>max) // if ; bulana kadar �al���r, sadece 1 sat�r yazacaksak {} gerekmez
		max=sayi;
	}
	printf("En b�y�k say�: %d",max);
	
	getch();
}
