#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL, "Turkish");
	
	// 0 girilene kadar girilen sayýnýn asal olup olmadýðýný yazdýran program
	int sayi,sayac=0;
	do
	{
		printf("Bir doðal sayý giriniz[!0]: ");
		scanf("%d",&sayi);
		for(int i=2; i<sayi; i++) // Asal sayý bulmak için klasik for döngüsü
			if(sayi%i==0)	// Kendinden küçük sayýlarla mod'u 0 ise asal deðildir
				sayac++;
			if(sayi==1)		// Programýn tam doðruluðu için 1 ve 0'ý özel ekledik
				sayac++;
			if(sayi==0)
				sayac++;
			if(sayac==0)
				printf("Sayý Asaldýr\n");
			if(sayac>0)
				printf("Asal Deðildir\n");
			sayac=0;
	}while(sayi!=0);
	
	getch();
}
