#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	//10 say� al�p aralar�ndan en b�y���n� ve en k�����n� yazd�ran program
	int sayac=1,sayi,max,min;
	printf("Say� giriniz: ");
	scanf("%d",&sayi);
	max=sayi;
	min=sayi;
	
	while(sayac<10)
	{
			printf("Say� giriniz: ");
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
	printf("En b�y�k say�: %d",max);
	printf("\nEn k���k say�: %d\n\n",min);
	
	// 0 Girilene kadar girilen say�lar�n toplam�n� yazd�ran program
	int toplam=0;
	int sayi1=0; 
	do
	{
		printf("Bir say� giriniz: ");
		scanf("%d",&sayi1);
		toplam=toplam+sayi1;
	}while(sayi1!=0);
	printf("Toplam: %d",toplam);

	
	
	getch();
}
