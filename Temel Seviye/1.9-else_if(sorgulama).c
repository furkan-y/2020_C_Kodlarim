#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{	setlocale(LC_ALL, "Turkish");

// Girilen 2 say�dan hangisinin b�y�k oldu�unu s�yleyen program
	
	int deger1, deger2;
	printf("Birinci say�y� giriniz: ");
	scanf("%d",&deger1); // Scanf'e \n ekleyince s�k�nt� ��kar
	printf("�kinci say�y� giriniz: ");
	scanf("%d",&deger2);
	printf("Girdi�iniz de�erler:%d ve %d\n",deger1,deger2);
	
	if (deger1 > deger2) {
		printf("Birinci say� ikinci say�dan b�y�kt�r\n\n");
	}
	else if (deger1 < deger2) { 
		printf("�kinci say� birinci say�dan b�y�kt�r\n\n"); // else if istenildi�i kadar �o�alt�labilir
	}
	else {
		printf("Birinci say� ikinci say�ya e�ittir\n\n");
	}
	
	
	int sy;
	printf("Bir tam say� giriniz: ");
	scanf("%d",&sy);
	if      (sy > 35) {
		printf("\nGirdi�iniz say� 35'den b�y�kt�r\n\n");
	}
	else if (sy < 35) {
		printf("\nGirdi�iniz say� 35'den k���kt�r\n\n");
	}
	else {
		printf("\nGirdi�iniz say� 35'e e�ittir\n\n");
	}
	
	int x;
	printf("50'den k���k ve 2 ile tam b�l�nebilen bir say� giriniz: ");
	scanf("%d",&x);
	
	if (x<50 && x%2==0) {
		printf("\n�artlar sa�lan�yor\n\n");
	} 
	else {
		printf("\n�artlar sa�lanm�yor\n\n");
	}
	
	int y;
	printf("1 ile 10 aras�nda veya 100 ile 110 aras�nda bir tam say� giriniz: ");
	scanf("%d",&y);
	
	if 		(y>=0 && y<=10 || y>=100 && y<=110) {
		printf("Kabul Edildi");
	}
	else {
		printf("Kabul Edilmedi");
	}
	
	getch();
}
