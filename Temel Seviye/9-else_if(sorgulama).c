#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{	setlocale(LC_ALL, "Turkish");

// Girilen 2 sayýdan hangisinin büyük olduðunu söyleyen program
	
	int deger1, deger2;
	printf("Birinci sayýyý giriniz: ");
	scanf("%d",&deger1); // Scanf'e \n ekleyince sýkýntý çýkar
	printf("Ýkinci sayýyý giriniz: ");
	scanf("%d",&deger2);
	printf("Girdiðiniz deðerler:%d ve %d\n",deger1,deger2);
	
	if (deger1 > deger2) {
		printf("Birinci sayý ikinci sayýdan büyüktür\n\n");
	}
	else if (deger1 < deger2) { 
		printf("Ýkinci sayý birinci sayýdan büyüktür\n\n"); // else if istenildiði kadar çoðaltýlabilir
	}
	else {
		printf("Birinci sayý ikinci sayýya eþittir\n\n");
	}
	
	
	int sy;
	printf("Bir tam sayý giriniz: ");
	scanf("%d",&sy);
	if      (sy > 35) {
		printf("\nGirdiðiniz sayý 35'den büyüktür\n\n");
	}
	else if (sy < 35) {
		printf("\nGirdiðiniz sayý 35'den küçüktür\n\n");
	}
	else {
		printf("\nGirdiðiniz sayý 35'e eþittir\n\n");
	}
	
	int x;
	printf("50'den küçük ve 2 ile tam bölünebilen bir sayý giriniz: ");
	scanf("%d",&x);
	
	if (x<50 && x%2==0) {
		printf("\nÞartlar saðlanýyor\n\n");
	} 
	else {
		printf("\nÞartlar saðlanmýyor\n\n");
	}
	
	int y;
	printf("1 ile 10 arasýnda veya 100 ile 110 arasýnda bir tam sayý giriniz: ");
	scanf("%d",&y);
	
	if 		(y>=0 && y<=10 || y>=100 && y<=110) {
		printf("Kabul Edildi");
	}
	else {
		printf("Kabul Edilmedi");
	}
	
	getch();
}
