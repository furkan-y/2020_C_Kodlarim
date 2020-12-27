#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Binom/Pascal üçgeni yazdýran program

int main()
{	setlocale(LC_ALL,"Turkish");
	
	for(int i=0; i<=10; i++)
	{
		for(int j=0; j<=i; j++)
		{
			int nf=1;
			for(int p=1; p<=i; p++) 
			{
				nf*=p;
			}
			int kf=1;
			for(int p=1; p<=j; p++)
			{
				kf*=p;
			}
			int nkf=1;
			for(int p=1; p<=i-j; p++)
			{
				nkf*=p;
			}
			printf("%d ",nf/(kf*nkf));
		}
		printf("\n");
	}
	getch();
}
