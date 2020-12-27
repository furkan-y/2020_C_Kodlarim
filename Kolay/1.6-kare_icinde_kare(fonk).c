#include <stdio.h>
#include <conio.h>
#include <locale.h>

/* Bir karenin bir kenarýndaki kare sayýsýný kullanýcýdan alýp içerdiði tüm karelerin sayýsýný yazdýran program  
 IQ testlerindeki karein içinde kaç tane kare var sorusu			*/
	
int fon(int);

int main()
{	setlocale(LC_ALL,"Turkish");
	   
	int x;
	printf("n çarpý n'lik karede n: ");
	scanf("%d",&x);
	printf("Ýçerdiði kare sayýsý: %d",fon(x));
	getch();
}

int fon(int n)
{
	int a,b;
	for(int i=n; i>=1; i--)
		a+=i*i;
	return a;
}
