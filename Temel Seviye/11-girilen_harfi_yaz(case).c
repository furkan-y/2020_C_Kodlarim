#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL, "Turkish");

	char harf;
	printf("Bir harf giriniz: ");
	scanf("%c",&harf);
	
	switch(harf)          // Noktal� virg�l sat�r� bitirmez komutun �al��mas�n� bitirir.
	{
		case 'a':
			printf("a harfini girdiniz\n\n");break; // Case break g�rd��� yere kadar her �eyi �al��t�r�r
		case 'b':
			printf("b harfini girdiniz\n\n");break;
		case 'c':
			printf("c harfini girdiniz\n\n");break;
		case 'd':
			printf("d harfini girdiniz\n\n");break;
		default:
			printf("Ge�ersiz bir de�er girdiniz!\n\n");break;
	}

	getch();
}
