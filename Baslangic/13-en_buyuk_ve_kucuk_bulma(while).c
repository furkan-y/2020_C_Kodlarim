#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	// Klavyeden girilen 5 sayýdan en büyüðünü ve en küçüðünü while döngüsü kullanarak yazdýran program
	int sayi,max,min,sayac=0;
	
	while(sayac<=5)
	{
		printf("Bir sayý giriniz: ");
		scanf("%d",&sayi);
		if(sayi>max)
			max=sayi;
		if(sayi<min)
			min=sayi;
		sayac+=1;
	}
	printf("En büyük deðer: %d\n",max);
	printf("En küçük deðer: %d",min);
	
	getch();
}
