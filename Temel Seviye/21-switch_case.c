#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() 
{	setlocale(LC_ALL, "Turkish");

	int lt=2;
	switch (lt)
	{
		case 1:
			printf("1 Litre\n\n");break;
		case 2:
			printf("2 Litre\n\n");break;
		default:
			printf("Invalid\n\n");
	}
	
	
	char harf; 
	printf("L�tfen bir harf giriniz: ");
	scanf("%c",&harf);
	switch (harf)   // Noktal� virg�l sat�r� bitirmez komutun �al��mas�n� bitirir.
	{	
		case 'a': // if (harf=='a')
			printf("a harfini girdiniz\n\n");break; 
		case 'b': 	// Case break g�rd��� yere kadar her �eyi �al��t�r�r
			printf("b harfini girdiniz\n\n");break;
		case 'c':
			printf("c harfini girdiniz\n\n");break;
		default:
			printf("a ,b ,c harflerinden birini girmediniz\n\n");break;
	}
	
	int sayi=0;
	printf("Haftan�n ka��nc� g�n�: ");
	scanf("%d",&sayi);
	switch (sayi)
	{
		case 1:
			printf("Pazartesi");break;
		case 2:
			printf("Sal�");break;
		case 3:
			printf("�ar�amba");break;
		case 4:
			printf("Per�embe");break;
		case 5:
			printf("Cuma");break;
		case 6:
			printf("Cumartesi");break;
		case 7:
			printf("Pazar");break;
		default:
			printf("Ge�ersiz bir de�er girdiniz");break;
	}

	getch();
}
