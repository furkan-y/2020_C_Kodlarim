#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() 
{	setlocale(LC_ALL,"Turkish");

	// do-while pek tercih edilmez belirli sebepleri vard�r
		
	// Klavyeden 1000 girilene kadar girilen �ift say�lar�n ortalamas�n� alan program
	int deger=0;
	int toplam=0;
	int sayac=0;
	float ort;
	
	do 			
	{
		printf("Bir de�er giriniz: ");
		scanf("%d",&deger);
		if (deger%2==0)
		{
		sayac+=1;
		toplam=toplam+deger;
		}
	}while(deger != 1000);	// do while'da ;'� unutma
	
	toplam-=deger;
	sayac-=1;
	ort=(float)toplam/sayac;
	printf("Girilen �ift say�lar�n ortalamas�: %f",ort);
	
	printf("\n____________________________________________________________\n\n");
	
	// Negatif de�er girilene kadar girilen de�erlerin ortalamas�n� alan program
	float ort1=0;   
	int toplam1=0;
	int sayac1=0;
	int deger1=0;
	do 
	{
		printf("Bir say� giriniz: ");
		scanf("%d",&deger1);
		if(deger1>=0)
		{
		sayac1+=1;
		toplam1+=deger1;
		}
	}while(deger1>=0);
	ort1=(float)toplam1/sayac1;
	printf("Ortalama: %f",ort1);


	getch();
}
