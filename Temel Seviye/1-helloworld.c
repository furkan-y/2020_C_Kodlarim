#include <stdio.h>  // Standard input output (Temel C komutlarýný barýndýrýr)
#include <conio.h>  // Windows iþletim sisteminde gerekli 
#include <locale.h> // Türkçe dil kütüphanesi (Türkçe karakterler kullanabilmek için)

int main()
{	setlocale(LC_ALL,"Turkish");
	
// Ekrana Hello World ve Merhaba Dünya yazdýran program
	
	printf("Hello World");
	printf("\nMerhaba Dünya"); // \n new line(satýr atlama) için
	
    getch();
}
