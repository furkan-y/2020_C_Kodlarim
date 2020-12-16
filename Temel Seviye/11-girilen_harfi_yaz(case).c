#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL, "Turkish");

	char harf;
	printf("Bir harf giriniz: ");
	scanf("%c",&harf);
	
	switch(harf)          // Noktalý virgül satýrý bitirmez komutun çalýþmasýný bitirir.
	{
		case 'a':
			printf("a harfini girdiniz\n\n");break; // Case break gördüðü yere kadar her þeyi çalýþtýrýr
		case 'b':
			printf("b harfini girdiniz\n\n");break;
		case 'c':
			printf("c harfini girdiniz\n\n");break;
		case 'd':
			printf("d harfini girdiniz\n\n");break;
		default:
			printf("Geçersiz bir deðer girdiniz!\n\n");break;
	}

	getch();
}
