#include <stdio.h>
#include <conio.h>
#include <locale.h>

// ilk 20 fibonacci sayýsýný hesaplayarak diziye[20] yerleþtirip yazdýran program

int main()
{	setlocale(LC_ALL,"Turkish");
	
	int fibo[20];
	fibo[0]=1,fibo[1]=1;
	
	for(int i=0; i<20; i++)
	{
		printf("%d.",i+1);
		if(i<2)
			printf("\t%d",fibo[i]);
		if(i>=2)
		{
			fibo[i]=fibo[i-1]+fibo[i-2];
			printf("\t%d",fibo[i]);
		}
		printf("\n");
	}
		
	getch();
}
