#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	// Kullan�c�dan kelime ve ekranda ka� defa yaz�lmak istendi�ini alan program
	char klm[20]; int defa=0; 
	printf("Bir kelime giriniz: ");
	scanf("%s",klm);
	printf("\nEkrana ka� defa yaz�lmas�n� istersiniz: ");
	scanf("%d",&defa);
	for (int i=1; i<=defa; i+=1)
		printf("%s \n",klm);
	
	printf("\n\n");
	
	// 5 ile 100 aras�nda 5'e b�l�nen ama 10'a b�l�nmeyen say�lar� ve adedini yazd�ran program
	int s=0;
	for(int i=5; i<100; i++) // For d�ng�s�nden sonra ; g�rene kadar �al���r 2 veya 3 sat�r� 1 sat�r gibi g�r�r
	{ 
		if(i%5==0 && i%10!=0) 
		{
			s++;
			printf("%d, ",i);
		}
	}
	printf("[%d] adet",s);
	
	printf("\n\n");

	for (int i=95; i>=-10; i-=5)
	{
		printf("%d, ",i);
	}

		
	printf("\n\n");

	// Kullan�c�dan al�nan say�n�n 50'den 200'e tamsay�lardan hangilerini ve ka� tanesini kalans�z b�ld���n� yazd�ran program
	int deger=0,adet=0; 
	printf("Bir say� giriniz: ");
	scanf("%d",&deger);
	for (int i=50; i<200; i+=1)
	if (i%deger==0)
	{
		adet+=1;
		printf("%d \t",i);
	}
	printf("%d adet 50 ile 200 aras�ndaki say�y� kalans�z b�ler.\n\n",adet);
	

	getch(); 
}		
