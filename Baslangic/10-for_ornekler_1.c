#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	// 1'den 10'a kadar say�lar� ekrana yazd�rmak
	for (int l=1; l<=10; l++) // i++  ==  i+=1  ==  i=i+1    sonra  i--	 i-=5
	printf("%d,",l);


	// 1'den 10'a kadar olan say�lar�n toplam�n� ekrana yazd�rmak
	int toplam=0;	
	for (int s=1; s<=10; s++)
	toplam+=s;
	printf("\nSay�lar�n toplam�: %d\n\n",toplam);
	
	
	// Bir kelimeyi ve ka��nc� kez yaz�ld���n� ekrana yazd�rma
	for(int i=1; i<=4; i+=1)
	printf("%d.Samet  ",i);
	
	
	// Kullan�c�dan bir say� alan ve o say�ya kadar olan pozitif tam say�lar� toplay�p yazd�ran program
	int x,y,total=0;
	printf("Bir pozitif tam say� giriniz: ");
	scanf("%d",&x);
	for (int i=1; i<=x; i+=1)
	{
		total+=i;
		printf("%d+",i);
	}
	printf("\n1'dan girdi�iniz say�ya kadar pozitif tam say�lar�n toplam�: %d\n\n",total);
	
	getch();
	
}
	
