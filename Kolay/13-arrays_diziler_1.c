#include <stdio.h>
#include <conio.h>
#include <locale.h> 
// Java,C,C#'da "[]" görürseniz array(dizi)ler ile bir iþlem yapýlýyordur. C syntax dillerde index 0'dan baþlar 

int main()
{	setlocale(LC_ALL,"Turkish");

	// 1'den 9'a kadar olan sayýlarý diziye atayýp yazdýran kod
	
	int dizi[10]; // 10 elemanlýk bir dizi tanýmla
	for(int i=0; i<10; i++)  // 0'dan 9'a kadar dönen bir döngü oluþtur
	{
		dizi[i]=i; // a dizisinin i. elemanýna i deðeri koyuluyor
    	printf("%d. index: %d\n",i,dizi[i]);
	}
	
	// Array içine 6 sayý koyup tersten index hanesiyle beraber yazdýr
	int a[6] = {2,3,9,8,15,-6}; // Kaç elemanlý olduðu eþitliðin saðýnda olduðu için [] içine 6 karakterdir yazmaya gerek yok
	for(int j=5; j>=0; j--)
		printf("\n%d.index: %d",j,a[j]);
		
		
	printf("\n_______________________________________________________\n\n");
	
	
	/* 2 Boyutlu diziler "1 2 3" gibi matrislerdir. Bu matrisi hafýzada tutmak için iki farklý boyuttaki boyut deðerleri tanýmlanmalýdýr.
						  4 5 6  soldaki matris örneðini yazdýr.																	*/
	
	int matris[2][3]={{1,2,3},{4,5,6}};
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d  ",matris[i][j]);
		}
		printf("\n");
	}

	getch();
}
