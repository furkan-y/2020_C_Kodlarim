#include <stdio.h>  
#include <conio.h>  
#include <locale.h> 

int main()
{	setlocale(LC_ALL,"Turkish");

// Kullanýcýdan 2 sayý alarak onlarla toplama, çýkarma, çarpma ve bölme iþlemleri gerçekleþtirebileceði if þartýyla iþlem menüsü oluþturma

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
	
	// if ';' görene kadar devam eder. Ýf'in altýna sadece 1 satýr kod yazdýðýmýz için {} koymamýza gerek yok
	
	if(secim==1)  
		printf("Sayýlarýn toplamý: %d",sayi1+sayi2);
	else if(secim==2)
		printf("Sayýlarýn farký: %d",sayi1-sayi2);
	else if(secim==3)
		printf("Sayýlarýn çarpýmý: %d",sayi1*sayi2);
	else if(secim==4)
		printf("Sayýlarýn oraný: %f",(float)sayi1/sayi2);  // deðiþkenlerden birini (float)'a çevirerek kalanlý bölme yapýlýr
	else
		printf("Geçersiz deðer girdiniz!");
	
	getch();
}
