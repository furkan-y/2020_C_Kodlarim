#include <stdio.h>
#include <conio.h>
#include <locale.h>

/* Bir karenin bir kenar�ndaki kare say�s�n� kullan�c�dan al�p i�erdi�i t�m karelerin say�s�n� yazd�ran program  
 IQ testlerindeki karein i�inde ka� tane kare var sorusu			*/
	
int fon(int);

int main()
{	setlocale(LC_ALL,"Turkish");
	   
	int x;
	printf("n �arp� n'lik karede n: ");
	scanf("%d",&x);
	printf("��erdi�i kare say�s�: %d",fon(x));
	getch();
}

int fon(int n)
{
	int a,b;
	for(int i=n; i>=1; i--)
		a+=i*i;
	return a;
}
