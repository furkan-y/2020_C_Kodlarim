#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h> // random say� girmek i�in gerekli k�t�phane
#include <time.h>	// random say� girmek i�in gerekli k�t�phane

int main()
{	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));	// random say� girmek i�in gerekli
	
	// Bilgisayardan rastgele bir say� almak
	int sayi;
	sayi=rand();
	printf("%d",sayi); 	printf("\n\n");
	
	
	// Bilgisayardan 5 ile 299 aras�nda rastgele bir say� almak
	int deneme=0;
	deneme=5+rand()%295; //5 ile 300 aras�nda, 5 dahil 300 dahil de�il
	printf("%d\n\n",deneme); //sayi=a+rand()%b; a ile a+b aras�nda bir say� �ret a dahil a+b dahil de�il
	
	
	// 48 ile 323 aras�nda rastgele 35 say� �retip bunlar�n aras�ndan 100'den b�y�k 186'dan k���k �ift olanlar� yazd�r
	int deger=0;
	for (int i=1; i<=35; i+=1)
	{
		deger=48+rand()%275;  
		if(deger>100 && deger<186 && deger%2==0)
			printf("%d\n",deger);
	}
		
	getch();
}
