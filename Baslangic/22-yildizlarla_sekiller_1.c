#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Y�ld�zlar ve d�ng�lerle dik ��gen �izmek
	for (int i=1; i<=5; i+=1) // �lk for sat�r say�s�n� belirler
	{
		for (int j=1; j<=i; j+=1) // �kinci for s�tun say�s�n� belirler
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	// Ters dik ��gen �izimi
	for (int i=1; i<=5; i+=1)
	{
		for (int j=5; j>=i; j-=1)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n____________________________________\n\n");
	
	// Dik ��genin simetrisini �izmek	
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
	
	// Ters dik ��genin simetrisini �izmek
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

	// Dik ��genin sat�r say�s�n� kullan�c�dan alarak �izmek
	int boy;
	printf("Boy de�erini giriniz: ");
	scanf("%d",&boy);
	
	for (int i=1; i<=boy; i+=1)
	{
		for (int j=1; j<=i; j+=1)
		{
			printf("*");
		}
		printf("\n");
	}	

	
	// Ters dik ��genin sat�r say�s�n� kullan�c�dan alarak �izmek
	int satir,sutun;
	printf("Sat�r de�erini giriniz: ");
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
