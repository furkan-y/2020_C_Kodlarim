#include <stdio.h>  // Standard input output (Temel C komutlar�n� bar�nd�r�r)
#include <conio.h>  // Windows i�letim sisteminde gerekli 
#include <locale.h> // T�rk�e dil k�t�phanesi (T�rk�e karakterler kullanabilmek i�in)

int main()
{	setlocale(LC_ALL,"Turkish");
	
// Ekrana Hello World ve Merhaba D�nya yazd�ran program
	
	printf("Hello World");
	printf("\nMerhaba D�nya"); // \n new line(sat�r atlama) i�in
	
    getch();
}
