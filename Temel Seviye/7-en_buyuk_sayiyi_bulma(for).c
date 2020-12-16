#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
// Klavyeden girilen 5 sayýdan en büyüðünü for döngüsü yazdýran program

	int sayi,max=0;
	
	for(int i=0; i<5; i++)  // Döngüyü 5 kez dönderiyoruz
	{
		printf("Bir sayý giriniz: ");
		scanf("%d",&sayi);
		if(sayi>max) // if ; bulana kadar çalýþýr, sadece 1 satýr yazacaksak {} gerekmez
		max=sayi;
	}
	printf("En büyük sayý: %d",max);
	
	getch();
}
