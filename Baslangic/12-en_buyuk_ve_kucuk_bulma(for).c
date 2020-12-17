#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Klavyeden girilen 5 sayýdan en büyüðünü ve en küçüðünü for döngüsü kullanarak yazdýran program
	int sayi,max,min;
	
	for(int i=0; i<5; i++)  // Döngüyü 5 kez dönderiyoruz
	{
		printf("Bir sayý giriniz: ");
		scanf("%d",&sayi);
		if(sayi>max) // if ; görene kadar çalýþýr, sadece 1 satýr yazacaksak {} gerekmez
		max=sayi;
		if(sayi<min)
		min=sayi;
	}
	printf("En büyük sayý: %d",max);
	printf("En küçük sayý: %d",min);
	
	getch();
}
