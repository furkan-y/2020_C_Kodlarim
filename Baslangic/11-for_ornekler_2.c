#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	// Kullanýcýdan kelime ve ekranda kaç defa yazýlmak istendiðini alan program
	char klm[20]; int defa=0; 
	printf("Bir kelime giriniz: ");
	scanf("%s",klm);
	printf("\nEkrana kaç defa yazýlmasýný istersiniz: ");
	scanf("%d",&defa);
	for (int i=1; i<=defa; i+=1)
		printf("%s \n",klm);
	
	printf("\n\n");
	
	// 5 ile 100 arasýnda 5'e bölünen ama 10'a bölünmeyen sayýlarý ve adedini yazdýran program
	int s=0;
	for(int i=5; i<100; i++) // For döngüsünden sonra ; görene kadar çalýþýr 2 veya 3 satýrý 1 satýr gibi görür
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

	// Kullanýcýdan alýnan sayýnýn 50'den 200'e tamsayýlardan hangilerini ve kaç tanesini kalansýz böldüðünü yazdýran program
	int deger=0,adet=0; 
	printf("Bir sayý giriniz: ");
	scanf("%d",&deger);
	for (int i=50; i<200; i+=1)
	if (i%deger==0)
	{
		adet+=1;
		printf("%d \t",i);
	}
	printf("%d adet 50 ile 200 arasýndaki sayýyý kalansýz böler.\n\n",adet);
	

	getch(); 
}		
