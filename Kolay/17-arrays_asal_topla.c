#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

// 1 ile 20 aras�ndan rastgele 15 say� al. Aralar�ndan asal olanlar�n�, toplamlar�n� ve t�m say�lar�n toplam�n� yazd�r 
		
int main()
{	setlocale(LC_ALL,"Turkish");
	srand(time(NULL));
	
	int array[20],counter,total=0,all=0;
	for(int i=0; i<15; i++)
		array[i]=2+rand()%18;
	for(int j=0; j<15; j++)
	{
		all+=array[j];
		for(int a=2; a<array[j]; a++)
		{
			if(array[j]%a==0)
				counter++;
		}
		if(counter==0)
		{
			printf("%d. hane: %d\n",j,array[j]);
			total+=array[j];
		}
		counter=0;
	}
	printf("Rastgele 15 say�dan asallar�n toplam�: %d",total);
	printf("\nB�t�n say�lar�n toplam�: %d",all);
	
	getch();
}
