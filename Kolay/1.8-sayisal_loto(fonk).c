#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

// 6 kolonda 6 tane 1'den 45'e kadar rastgele deðer üretilen sayýsal loto programý

void sayisal_loto();

int main()
{	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	
	sayisal_loto();
}

void sayisal_loto()
{
	for(int i=1; i<=6; i++)
	{
		printf("%d. ",i);
		for(int j=1; j<=6; j++)
		{
			printf("%d\t",1+rand()%45);
		}
		printf("\n");
	}
}
