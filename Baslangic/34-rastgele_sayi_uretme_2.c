#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
	// 50 ile 200 aras�nda rastgele �retilen 15 say�dan asal olanlar�n� yazd�r, asal olmayanlar�n toplam�n� yazd�r
	int sayacc=0;
	int sayi;
	int top=0;
	for (int i=1; i<=15; i+=1)
	{
		sayi=50+rand()%150; // 50 ile 200 aras�nda 
		for(int j=2; j<sayi; j+=1)
		{
			if(sayi%j==0)
				sayacc+=1;
		}
		if(sayacc!=0)
		{
			top+=sayi;
		}
		else if(sayacc==0)
		{
			printf("Asal: %d\n",sayi);
		}
		sayacc=0;
	}
	printf("Asal olmayanlar�n toplam�: %d\n\n",top);
	
	
	// 100 ile 130 aras�nda 100 adet rastgele �retilen say�dan ilk say�y� ve ka��nc� s�ralarda tekrar geldi�ini yazd�ran program
	printf("ilk �retilen say�n�n tekrar etti�i haneler: ");
	int ilk,tekrar;
	for(int i=1; i<=100; i++)
	{
		int k=100+rand()%31;
		if(i==1)
			ilk=k;

		if(i>1 && ilk==k)
		{
			tekrar=i;
			printf("%d. ",tekrar);
		}
	}
	printf("\nilk say� %d idi\n\n",ilk);
	
	
	// 100 ile 130 aras�nda rastgele 100 say� �retiliyor. �lk �retilen say�y� ve en yak�n ka��nc� seferde tekrar �retildi�ini yazd�ran program
    int deger,first;
    for(int i=1; i<=100; i++)
	{
		deger=100+rand()%31;
		if(i==1)
			first=deger;
		if(i>1 && first==deger)
		{
			printf("%d. seferde ilk say� olan %d tekrar �retilmi�tir",i,first);
			break;	// break komutu d�ng�y� sonland�r�r, biz de en yak�n tekrar� al�p bitiriyoruz
		}
	}
	
	getch();
}
