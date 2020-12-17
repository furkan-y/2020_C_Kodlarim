#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{	setlocale(LC_ALL,"Turkish");

// Kullanýcýdan bugün'ün tarihini ve kaç yaþýnda olduðunu alarak doðum tarihini yýl olarak yazan program
	int bugun,dogum_yili; 
	printf("Þu anda hangi yýl: ");
	scanf("%d",&bugun);
	printf("Doðum yýlýnýz: ");
	scanf("%d",&dogum_yili);
	printf("%d Yaþýndasýnýz",bugun-dogum_yili); 
	
// Yaþ sýnýrý denetleme
	int year;
	printf("\nDoðum tarihinizi giriniz: ");
	scanf("%d",&year);
	
	if(year > 2002)
		printf("\nYaþýnýz 18'den küçüktür\n");
	else if(year <= 2002)
		printf("Yaþýnýz 18 veya büyüktür\n");
	else
		printf("Invalid\n");
	
	getch();
}
