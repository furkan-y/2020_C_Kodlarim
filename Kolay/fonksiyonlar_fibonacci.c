#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Verilen sýradaki fibonacci sayýsýný bulan kod
int fib(int);
int main()
{	setlocale(LC_ALL,"Turkish");

	int x;
	printf("Fibonacci dizisinin kaçýncý terimini istiyorsunuz: ");
	scanf("%d",&x);
	printf("%d",fib(x));
	getch();
}

int fib(int n)
{
	int a=1,b=1;
	int c;
	for(int i=3; i<=n; i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
