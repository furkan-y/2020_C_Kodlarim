#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{	setlocale(LC_ALL, "Turkish");

	int x,y,z;
	printf("1. sayýyý giriniz: ");
	scanf("%d",&x);
	printf("\n2. sayýyý giriniz: ");
	scanf("%d",&y);
	printf("\n---Ýþlem Menüsü---");
	printf("\n[1] Toplama");
	printf("\n[2] Çýkarma");
	printf("\n[3] Çarpma");
	printf("\n[4] Bölme");
	printf("\nYapmak istediðiniz iþlem: ");
	scanf("%d",&z);
	
	
	if 		(z==1) {
		printf("Sayýlarýn toplamý: %d",x+y);
	}
	else if (z==2) {
		printf("Sayýlarýn farký: %d",x-y);
	}
	else if (z==3) {
		printf("Sayýlarýn çarpýmý: %d",x*y);
	}
	else if (z==4) {
		printf("Sayýlarýn oraný: %f",(float)x/y);
	}
	else {
		printf("Geçersiz deðer girdiniz!");
	}
	
	
	getch();
}
