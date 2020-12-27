#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

// ��renciden vize(%40 etkili) ve final(%60 etkili) notunu al�p ortalamas�n� ve harf notunu g�steren program

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
	float ort=(float)v*0.40+(float)f*0.60; // %40'a %60 etkiyi ald�k
	if(ort>=90 && ort<=100)
	{
		harf[0]='A';harf[1]='A'; // printf ile de yaz�labilirdi b�yle tercih ettim
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
	printf("Not ortalaman�z: %.3f\tHarf Notunuz: %s",ort,harf);
}

/* char renk = {�m�, �a�, �v�, �i�};
Burada dikkat edilmesi gereken en �nemli nokta e�er dizgi karakter dizisi �eklinde tan�mlanm��sa atanacak de�er sadece tan�mlama 
esnas�nda atanabilir. Program�n herhangi bir yerinde sonradan de�er atamas� yap�lamaz. Sonradan de�er atamak ya da de�i�tirmek ancak 
strcpy( ) haz�r fonksiyonu ile yap�labilir. (Karakter dizisi olarak tan�mlanm��sa bu kural ge�erlidir. G�sterici (pointer) olarak tan�mlanm��sa 
istenen her zaman � � (�ift t�rnak) ile atama yap�labilir.)     */
