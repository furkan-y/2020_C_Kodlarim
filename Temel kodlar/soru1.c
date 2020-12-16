#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{	setlocale(LC_ALL, "Turkish");

/* Kullanýcýdan bugün'ün tarihini ve kaç yaþýnda olduðunu alarak doðum tarihini yýl olarak yazan program
	int bugun,yas; 
	printf("Þu anda hangi yýl: ");
	scanf("%d",&bugun);
	printf("Kaç yaþýndasýnýz: ");
	scanf("%d",&yas);
	printf("%d doðumlusunuz.",bugun-yas); */
	
/* Kullanýcýdan a,b ve c sayýlarýný alarak a*2+b*2+3c iþlemini yapan kodu yazýn.
	int a,b,c;
	printf("a,b ve c deðerlerini sýrayla giriniz: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nDenklem sonucu 1: %d",a*a+b*b+3*c);
	a=pow(a,2);
	b=pow(b,2);
	printf("\nDenklem sonucu 2: %d",a+b+3*c); */
	
/* Bir havuzu a musluðu 3, b musluðu 8 ve c musluðu 12 saatte dolduruyor ise 3 musluk beraber kaç saatte doldurur
	float saat= 1.0/3.0 + 1.0/8.0 + 1.0/12.0;
	printf("%f saatte",1/saat);
	printf("\n%f dakika",1/saat*60);	*/
	
// Girilen sayýnýn 5'den büyük olup olmadýðýný 0 girene kadar söyleyen program	
	int sayi=1;
	while(sayi!=0) 
	{
		printf("Bir sayý giriniz[0]: ");
		scanf("%d",&sayi);	
		if(sayi==0)
		printf("son");
		else if(sayi>5)
		printf("Büyük");
		else if(sayi<5)
		printf("Küçük");
		else if(sayi==5)
		printf("Eþit");
		else
		printf("Geçersiz deðer");
		printf("\n");
	}
	       		
// Kullanýcýdan 2 sayý alarak 			
	
	
	
	
	
	getch();
}
