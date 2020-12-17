#include <stdio.h>  
#include <conio.h>  
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Ekrana Hello World ve Merhaba Dünya yazdýran program
	
	printf("Hello World");
	printf("\nMerhaba Dünya"); // \n new line(satýr atlama) için
	
    getch();
}
