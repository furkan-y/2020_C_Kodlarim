#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/* Deðer döndüren fonksiyonlar

Cmd ekranýnda döngü dönerken Ctrl+C kapatýr "Pause Break" döngüyü kýrar

Fonksiyonlarý main'den sonra yazdýðýmýz için önce prototip tanýtmamýz gerekiyor */
	
int us();
int topla();
int carp();
int kare();
int kadar();
int fakt();

int main()
{	setlocale(LC_ALL,"Turkish");
	
	int a,b,c,d;
	printf("2 sayý giriniz: "); scanf("%d%d",&a,&b); 
	printf("%d üzeri %d= %d",a,b,us(a,b));
	printf("\nToplamlarý: %d",topla(a,b));
	printf("\nÇarpýmlarý: %d",carp(a,b));
	printf("\nToplamlarýnýn karesi: %d",kare(topla(a,b)));
	
	printf("\n\nBir sayý giriniz: "); scanf("%d",&c);
	printf("Girdiðiniz sayýya kadar olan sayýlarýn toplamý: %d",kadar(c));
	
	printf("\n\nFaktöriyeli alýnacak bir sayý giriniz: "); scanf("%d",&d);
	printf("Girdiðiniz sayýnýn faktöriyeli deðeri: %d",fakt(d));

	getch();
}

int us(int x,int y)
{
	return pow(x,y);
}
int topla(int x,int y)
{
	return x+y;
}
int carp(int x,int y)
{
	return x*y;
}
int kare(int x)
{
	return x*x;
}
int kadar(int x)
{
	int toplam=0;
	for(int i=1; i<=x; i++)
		toplam+=i;
	return toplam;
}
int fakt(int x)
{
	int sonuc=1;
	for(int i=1; i<=x; i++)
		sonuc*=i;
	return sonuc;
}
