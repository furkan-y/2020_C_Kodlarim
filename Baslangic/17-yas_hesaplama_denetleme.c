#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{	setlocale(LC_ALL,"Turkish");

// Kullan�c�dan bug�n'�n tarihini ve ka� ya��nda oldu�unu alarak do�um tarihini y�l olarak yazan program
	int bugun,dogum_yili; 
	printf("�u anda hangi y�l: ");
	scanf("%d",&bugun);
	printf("Do�um y�l�n�z: ");
	scanf("%d",&dogum_yili);
	printf("%d Ya��ndas�n�z",bugun-dogum_yili); 
	
// Ya� s�n�r� denetleme
	int year;
	printf("\nDo�um tarihinizi giriniz: ");
	scanf("%d",&year);
	
	if(year > 2002)
		printf("\nYa��n�z 18'den k���kt�r\n");
	else if(year <= 2002)
		printf("Ya��n�z 18 veya b�y�kt�r\n");
	else
		printf("Invalid\n");
	
	getch();
}
