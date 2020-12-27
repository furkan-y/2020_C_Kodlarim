#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

// Öðrenciden vize(%40 etkili) ve final(%60 etkili) notunu alýp ortalamasýný ve harf notunu gösteren program

void ort(int v,int f);
void harf();

int main()
{	setlocale(LC_ALL,"Turkish");
	
	int vize,final;
	printf("Vize notunuzu giriniz: "); scanf("%d",&vize);
	printf("Final notunuzu giriniz: "); scanf("%d",&final);
	ort(vize,final);
}

void ort(int v,int f)
{
	char harf[1];
	float ort=(float)v*0.40+(float)f*0.60; // %40'a %60 etkiyi aldýk
	if(ort>=90 && ort<=100)
	{
		harf[0]='A';harf[1]='A'; // printf ile de yazýlabilirdi böyle tercih ettim
	}
	else if(ort<90 && ort>=85)
	{
		harf[0]='A';harf[1]='B';
	}	
	else if(ort<85 && ort>80)
	{
		harf[0]='B';harf[1]='B';
	}
	else if(ort<80 && ort>=75)
	{
		harf[0]='B';harf[1]='C';
	}
	else if(ort<75 && ort>=70)
	{
		harf[0]='C';harf[1]='C';
	}
	else if(ort<70 && ort>=65)
	{
		harf[0]='D';harf[1]='C';
	}
	else if(ort<65 && ort>=60)
	{
		harf[0]='D';harf[1]='D';
	}
	else if(ort<60 && ort>=50)
	{
		harf[0]='D';harf[1]='F';
	}
	else
	{
		harf[0]='F';harf[1]='F';
	}
	printf("Not ortalamanýz: %.3f\tHarf Notunuz: %s",ort,harf);
}

/* char renk = {‘m’, ‘a’, ‘v’, ‘i’};
Burada dikkat edilmesi gereken en önemli nokta eðer dizgi karakter dizisi þeklinde tanýmlanmýþsa atanacak deðer sadece tanýmlama 
esnasýnda atanabilir. Programýn herhangi bir yerinde sonradan deðer atamasý yapýlamaz. Sonradan deðer atamak ya da deðiþtirmek ancak 
strcpy( ) hazýr fonksiyonu ile yapýlabilir. (Karakter dizisi olarak tanýmlanmýþsa bu kural geçerlidir. Gösterici (pointer) olarak tanýmlanmýþsa 
istenen her zaman “ ” (çift týrnak) ile atama yapýlabilir.)     */
