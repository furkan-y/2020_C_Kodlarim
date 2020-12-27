#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

// 1 ile 20 arasýndan rastgele 15 sayý al. Aralarýndan asal olanlarýný, toplamlarýný ve tüm sayýlarýn toplamýný yazdýr 
		
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
	printf("Rastgele 15 sayýdan asallarýn toplamý: %d",total);
	printf("\nBütün sayýlarýn toplamý: %d",all);
	
	getch();
}
