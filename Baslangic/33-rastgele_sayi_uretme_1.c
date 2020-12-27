#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h> // random sayı girmek için gerekli kütüphane
#include <time.h>	// random sayı girmek için gerekli kütüphane

int main()
{	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));	// random sayı girmek için gerekli
	
	// Bilgisayardan rastgele bir sayı almak
	int sayi;
	sayi=rand();
	printf("%d",sayi); 	printf("\n\n");
	
	
	// Bilgisayardan 5 ile 299 arasında rastgele bir sayı almak
	int deneme=0;
	deneme=5+rand()%295; //5 ile 300 arasında, 5 dahil 300 dahil değil
	printf("%d\n\n",deneme); //sayi=a+rand()%b; a ile a+b arasında bir sayı üret a dahil a+b dahil değil
	
	
	// 48 ile 323 arasında rastgele 35 sayı üretip bunların arasından 100'den büyük 186'dan küçük çift olanları yazdır
	int deger=0;
	for (int i=1; i<=35; i+=1)
	{
		deger=48+rand()%275;  
		if(deger>100 && deger<186 && deger%2==0)
			printf("%d\n",deger);
	}
		
	getch();
}
