#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{	setlocale(LC_ALL, "Turkish");

/* Kullan�c�dan bug�n'�n tarihini ve ka� ya��nda oldu�unu alarak do�um tarihini y�l olarak yazan program
	int bugun,yas; 
	printf("�u anda hangi y�l: ");
	scanf("%d",&bugun);
	printf("Ka� ya��ndas�n�z: ");
	scanf("%d",&yas);
	printf("%d do�umlusunuz.",bugun-yas); */
	
/* Kullan�c�dan a,b ve c say�lar�n� alarak a*2+b*2+3c i�lemini yapan kodu yaz�n.
	int a,b,c;
	printf("a,b ve c de�erlerini s�rayla giriniz: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nDenklem sonucu 1: %d",a*a+b*b+3*c);
	a=pow(a,2);
	b=pow(b,2);
	printf("\nDenklem sonucu 2: %d",a+b+3*c); */
	
/* Bir havuzu a muslu�u 3, b muslu�u 8 ve c muslu�u 12 saatte dolduruyor ise 3 musluk beraber ka� saatte doldurur
	float saat= 1.0/3.0 + 1.0/8.0 + 1.0/12.0;
	printf("%f saatte",1/saat);
	printf("\n%f dakika",1/saat*60);	*/
	
// Girilen say�n�n 5'den b�y�k olup olmad���n� 0 girene kadar s�yleyen program	
	int sayi=1;
	while(sayi!=0) 
	{
		printf("Bir say� giriniz[0]: ");
		scanf("%d",&sayi);	
		if(sayi==0)
		printf("son");
		else if(sayi>5)
		printf("B�y�k");
		else if(sayi<5)
		printf("K���k");
		else if(sayi==5)
		printf("E�it");
		else
		printf("Ge�ersiz de�er");
		printf("\n");
	}
	       		
// Kullan�c�dan 2 say� alarak 			
	
	
	
	
	
	getch();
}
