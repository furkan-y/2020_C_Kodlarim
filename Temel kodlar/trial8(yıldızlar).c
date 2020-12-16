#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL, "Turkish");

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
	
	printf("________________________________________\n");
		
	
	for (int i=1; i<=5; i+=1)
	{
		for (int j=1; j<=i; j+=1)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i=1; i<=5; i+=1)
	{
		for (int j=5; j>=i; j-=1)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("________________________________________\n");
		
	int adet=7, bosluk=1; //adet= 9
	for(int i=1; i<=4; i+=1) // i<= 5
	{
		for(int a=1; a<=bosluk; a+=1)
		printf(" ");
		for(int j=1; j<=adet; j+=1)
		printf("*");
	adet-=2;
	bosluk+=2;
	printf("\n");
	}
	
	printf("________________________________________\n");
	// Ödev Ýçi dolu üçgen çiz
	int bos1=5, tane=1;
	for (int i=1; i<=5; i+=1)
	{
		for(int a=1; a<=bos1; a+=1)
			printf(" ");
		for(int j=1; j<=tane; j+=1)
			printf("*");
		bos1-=1;
		tane+=2;
		printf("\n");
	}	
	printf("________________________________________\n");
	
	int defa=1,bos=17;
	for (int i=1; i<=5; i+=1)
	{
		for (int a=1; a<=defa; a+=1)
		printf("*");
		for (int j=bos; j>=1; j-=1)
		printf(" ");
		for (int a=1; a<=defa; a+=1)
		printf("*");
		
		bos-=4;
		defa+=2;
		printf("\n");
	}
	
		printf("________________________________________\n");
	
	int defa1=9;
	for (int i=1; i<=5; i+=1)
	{
		for (int a=1; a<=i; a+=1)
			printf(" ");
		for (int j=defa1; j>=1; j-=1)
			printf("*");
			
		defa1-=2;
		printf("\n");
	}
	int kez=1;
	for (int i=1; i<=5; i+=1)
	{
		for (int a=5; a>=i; a-=1)
			printf(" ");
		for (int j=1; j<=kez; j+=1)
			printf("*");
			
		kez+=2;
		printf("\n");
	}
	
	
	getch();
}
