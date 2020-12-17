#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	// 1'den 10'a kadar sayýlarý ekrana yazdýrmak
	for (int l=1; l<=10; l++) // i++  ==  i+=1  ==  i=i+1    sonra  i--	 i-=5
	printf("%d,",l);


	// 1'den 10'a kadar olan sayýlarýn toplamýný ekrana yazdýrmak
	int toplam=0;	
	for (int s=1; s<=10; s++)
	toplam+=s;
	printf("\nSayýlarýn toplamý: %d\n\n",toplam);
	
	
	// Bir kelimeyi ve kaçýncý kez yazýldýðýný ekrana yazdýrma
	for(int i=1; i<=4; i+=1)
	printf("%d.Samet  ",i);
	
	
	// Kullanýcýdan bir sayý alan ve o sayýya kadar olan pozitif tam sayýlarý toplayýp yazdýran program
	int x,y,total=0;
	printf("Bir pozitif tam sayý giriniz: ");
	scanf("%d",&x);
	for (int i=1; i<=x; i+=1)
	{
		total+=i;
		printf("%d+",i);
	}
	printf("\n1'dan girdiðiniz sayýya kadar pozitif tam sayýlarýn toplamý: %d\n\n",total);
	
	getch();
	
}
	
