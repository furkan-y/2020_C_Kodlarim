#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define degisken 5 /* Programda degisken g�rd��� her yere 5 say�s�n� atar
while d�ng�s�n�n i�ine 0 yaz�l�rsa �al��maz onun d���ndaki t�m say�lar do�ruyu ifade eder
b�yle olursa sonsuz d�ng�ye girer Pause Break ile d�ng� k�r�labilir */

// Fibonacci say� dizisinin ilk 12 say�s�n� ekrana yazd�ran program  1,1,2,3,5,8...

int main()
{	setlocale(LC_ALL,"Turkish");
	
	int sayi1=1;
	int sayi2=1;
	int toplam;
	printf("%d,%d,",sayi1,sayi2);  // �lk 2 say� 1 ve 1'i yazd�rd�k
	
	for(int i=1; i<=10; i++)  // 12 say�y� istedi�i i�in 2 say�y� yukar�da 10 say�y� burada yazd�raca��z
	{
		toplam=sayi1+sayi2;  // Toplam de�i�kenine 1. ve 2. say�y� toplay�p kaydedip yazd�rd�k
		printf("%d,",toplam); // S�rekli 2.'yi 1. say�ya ve 2 say�n�n toplam�n� 2. say�ya yazd�rarak d�ng�y� devam ettirdik
		sayi1=sayi2;
		sayi2=toplam;
	}
	
    getch();
}
