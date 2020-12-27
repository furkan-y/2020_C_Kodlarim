#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Kullanýcýdan alýnan 5 haneli bir diziyi tersine çevirip yazdýran program

int main()
{	setlocale(LC_ALL,"Turkish");
	
	int dizi[5];
	printf("5 tam sayý giriniz: ");		scanf("%d%d%d%d%d",&dizi[0],&dizi[1],&dizi[2],&dizi[3],&dizi[4]);
	for(int i=0; i<5; i++)
		printf("dizi[%d] = %d\n",i,dizi[i]);
	
	printf("\n\n");
	int temp;
	for(int i=0; i<2; i++)
	{
		temp=dizi[i];
		dizi[i]=dizi[4-i];
		dizi[4-i]=temp;
	}
	
	for(int i=0; i<5; i++)
	{
		printf("%d  ",dizi[i]);
	}
	
	getch();
}
