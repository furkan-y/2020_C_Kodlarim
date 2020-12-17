#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Yýldýzlar ve döngülerle dik üçgen çizmek
	for (int i=1; i<=5; i+=1) // Ýlk for satýr sayýsýný belirler
	{
		for (int j=1; j<=i; j+=1) // Ýkinci for sütun sayýsýný belirler
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	// Ters dik üçgen çizimi
	for (int i=1; i<=5; i+=1)
	{
		for (int j=5; j>=i; j-=1)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n____________________________________\n\n");
	
	// Dik üçgenin simetrisini çizmek	
	int adet=9, bosluk=1; //adet= 9
	for(int i=1; i<=5; i+=1) // i<= 5
	{
		for(int a=1; a<=bosluk; a+=1)
		printf(" ");
		for(int j=1; j<=adet; j+=1)
		printf("*");
	adet-=2;
	bosluk+=2;
	printf("\n");
	}
	
	// Ters dik üçgenin simetrisini çizmek
	int say=1,bos=9;
	for(int i=1; i<=5; i++)
	{
		for(int a=1; a<=bos; a++)
			printf(" ");
		for(int j=1; j<=say; j++)
			printf("*");
		printf("\n");
		bos-=2;
		say+=2;
	}
	
	printf("\n\n\n");

	// Dik üçgenin satýr sayýsýný kullanýcýdan alarak çizmek
	int boy;
	printf("Boy deðerini giriniz: ");
	scanf("%d",&boy);
	
	for (int i=1; i<=boy; i+=1)
	{
		for (int j=1; j<=i; j+=1)
		{
			printf("*");
		}
		printf("\n");
	}	

	
	// Ters dik üçgenin satýr sayýsýný kullanýcýdan alarak çizmek
	int satir,sutun;
	printf("Satýr deðerini giriniz: ");
	scanf("%d",&satir);
	
	for (int i=1; i<=satir; i+=1)
	{
		for (int j=satir; j>=i; j-=1)
		{
			printf("*");
		}
		printf("\n");
	}
	

	
	


	
	getch();
}
