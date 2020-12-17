#include <stdio.h> 
#include <conio.h>  
#include <locale.h> 

int main()
{	setlocale(LC_ALL, "Turkish");

// Kullanýcýdan 2 sayý alarak onlarla toplama, çýkarma, çarpma ve bölme iþlemleri gerçekleþtirebileceði case kullanýmýyla iþlem menüsü oluþturma

	int sayi1,sayi2,secim;
	printf("1. sayýyý giriniz: ");
	scanf("%d",&sayi1);
	printf("2. sayýyý giriniz: ");
	scanf("%d",&sayi2);
	printf("\n---Ýþlem Menüsü---");
	printf("\n[1] Toplama");
	printf("\n[2] Çýkarma");
	printf("\n[3] Çarpma");
	printf("\n[4] Bölme");
	printf("\nYapmak istediðiniz iþlem(1,2,3 veya 4): ");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			printf("\nSayýlarýn toplamý: %d",sayi1+sayi2);break;
		case 2:
			printf("\nSayýlarýn farký: %d",sayi1-sayi2);break;
		case 3:
			printf("\nSayýlarýn çarpýmý: %d",sayi1*sayi2);break;
		case 4:
			printf("\nSayýlarýn oraný: %f",(float)sayi1/sayi2);break;  // Bölmede bölen veya bölünenden birisi float olmak zorundadýr.
		default:
			printf("\nGeçersiz bir deðer girdiniz!");break;
	}
	
	
	getch();
}
