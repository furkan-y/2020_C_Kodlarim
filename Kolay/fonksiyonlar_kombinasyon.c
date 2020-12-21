#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Verilen sayýnýn kombinasyonunu bulan kod

int fact(int);
int comb(int,int);
int main()
{	setlocale(LC_ALL,"Turkish");

	printf("Ýki sayý giriniz: ");
	int x,y;
	scanf("%d%d",&x,&y);
	printf("Kombinasyonu: %d",comb(x,y));
	getch();
}
int comb(int x,int y)
{
	return fact(x)/(fact(y)*(fact(x-y)));
}
int fact(int x)
{
	int sonuc=1;
	for(int i=1; i<=x; i++)
		sonuc*=i;
	return sonuc;
}


