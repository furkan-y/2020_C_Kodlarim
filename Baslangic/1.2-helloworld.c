#include <stdio.h>  
#include <conio.h>  
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Ekrana Hello World ve Merhaba D�nya yazd�ran program
	
	printf("Hello World");
	printf("\nMerhaba D�nya"); // \n new line(sat�r atlama) i�in
	
    getch();
}
