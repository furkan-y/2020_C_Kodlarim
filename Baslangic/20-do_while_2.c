#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	//10 sayý alýp aralarýndan en büyüðünü ve en küçüðünü yazdýran program
	int sayac=1,sayi,max,min;
	printf("Sayý giriniz: ");
	scanf("%d",&sayi);
	max=sayi;
	min=sayi;
	
	while(sayac<10)
	{
			printf("Sayý giriniz: ");
			scanf("%d",&sayi);
		if(sayi>max)
		{
			max=sayi;
		}
		if(sayi<min)
		{
			min=sayi;
		}
		sayac+=1;
	}
	printf("En büyük sayý: %d",max);
	printf("\nEn küçük sayý: %d\n\n",min);
	
	// 0 Girilene kadar girilen sayýlarýn toplamýný yazdýran program
	int toplam=0;
	int sayi1=0; 
	do
	{
		printf("Bir sayý giriniz: ");
		scanf("%d",&sayi1);
		toplam=toplam+sayi1;
	}while(sayi1!=0);
	printf("Toplam: %d",toplam);

	
	
	getch();
}
