#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Verilen say�n�n kombinasyonunu bulan kod

int fonction(int);
int comb(int,int);

int main()
{	setlocale(LC_ALL,"Turkish");

	printf("�ki say� giriniz: ");
	int x,y;
	scanf("%d%d",&x,&y);
	printf("Kombinasyonu: %d",comb(x,y));
	getch();
}

int comb(int x,int y)
{
	return fonction(x)/(fonction(y)*(fonction(x-y)));
}
int fonction(int x)
{
	int sonuc=1;
	for(int i=1; i<=x; i++)
		sonuc*=i;
	return sonuc;
}


