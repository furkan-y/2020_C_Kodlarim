#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	// Klavyeden girilen 5 sayýdan en büyüðünü ve en küçüðünü while döngüsü kullanarak yazdýran program
	int sayi,max,min; 
	int sayac=0; // Loop variable(döngü deðiþkeni) while döngüsünde döngüden önce atanmalýdýr
	
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
	printf("En küçük deðer: %d\n\n\n",min);


	// 0 girilene kadar girilen sayýlarýn ortalamasýný yazdýran program	
	int deger,sayacc=-1,toplam=1;
	while(deger!=-1)
	{
		printf("Bir sayý giriniz[!-1]: ");
		scanf("%d",&deger);
		toplam+=deger;
		sayacc++;
	}
	printf("Sayýlarýn ortalamasý: %d",toplam/sayacc);
	
	getch();
}
