#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
	// 50 ile 200 arasýnda rastgele üretilen 15 sayýdan asal olanlarýný yazdýr, asal olmayanlarýn toplamýný yazdýr
	int sayacc=0;
	int sayi;
	int top=0;
	for (int i=1; i<=15; i+=1)
	{
		sayi=50+rand()%150; // 50 ile 200 arasýnda 
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
	printf("Asal olmayanlarýn toplamý: %d\n\n",top);
	
	
	// 100 ile 130 arasýnda 100 adet rastgele üretilen sayýdan ilk sayýyý ve kaçýncý sýralarda tekrar geldiðini yazdýran program
	printf("ilk üretilen sayýnýn tekrar ettiði haneler: ");
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
	printf("\nilk sayý %d idi\n\n",ilk);
	
	
	// 100 ile 130 arasýnda rastgele 100 sayý üretiliyor. Ýlk üretilen sayýyý ve en yakýn kaçýncý seferde tekrar üretildiðini yazdýran program
    int deger,first;
    for(int i=1; i<=100; i++)
	{
		deger=100+rand()%31;
		if(i==1)
			first=deger;
		if(i>1 && first==deger)
		{
			printf("%d. seferde ilk sayý olan %d tekrar üretilmiþtir",i,first);
			break;	// break komutu döngüyü sonlandýrýr, biz de en yakýn tekrarý alýp bitiriyoruz
		}
	}
	
	getch();
}
