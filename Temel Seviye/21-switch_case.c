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
	printf("Lütfen bir harf giriniz: ");
	scanf("%c",&harf);
	switch (harf)   // Noktalý virgül satýrý bitirmez komutun çalýþmasýný bitirir.
	{	
		case 'a': // if (harf=='a')
			printf("a harfini girdiniz\n\n");break; 
		case 'b': 	// Case break gördüðü yere kadar her þeyi çalýþtýrýr
			printf("b harfini girdiniz\n\n");break;
		case 'c':
			printf("c harfini girdiniz\n\n");break;
		default:
			printf("a ,b ,c harflerinden birini girmediniz\n\n");break;
	}
	
	int sayi=0;
	printf("Haftanýn kaçýncý günü: ");
	scanf("%d",&sayi);
	switch (sayi)
	{
		case 1:
			printf("Pazartesi");break;
		case 2:
			printf("Salý");break;
		case 3:
			printf("Çarþamba");break;
		case 4:
			printf("Perþembe");break;
		case 5:
			printf("Cuma");break;
		case 6:
			printf("Cumartesi");break;
		case 7:
			printf("Pazar");break;
		default:
			printf("Geçersiz bir deðer girdiniz");break;
	}

	getch();
}
