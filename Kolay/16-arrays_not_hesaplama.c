#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*  1. 10 ��rencinin notlar� al�n�p ortalama,max,min de�erlerini yazd�r. 
	2. Kullan�c�dan bir not al ve bu notun daha �nce girilip girilmedi�ini kontrol et ve bunu da yazd�r.	*/
		
int main()
{	setlocale(LC_ALL,"Turkish");

	int score[10],min,max,ort,total;
	printf("1. ��rencinin notunu giriniz: ");
	scanf("%d",&score[0]);
	min=score[0];
	for(int i=1; i<10; i++)
	{
		printf("%d. ��rencinin notunu giriniz: ",i+1);
		scanf("%d",&score[i]);
		total+=score[i];
		if(score[i]>max)
			max=score[i];
		if(score[i]<min)
			min=score[i];
	}
	printf("\nEn y�ksek puan: %d",max);
	printf("\nEn d���k puan: %d",min);
	printf("\nOrtalama puan: %f\n\n",(float)total/10);
	
	int mynot,counter;
	printf("Bir not giriniz: ");	scanf("%d",&mynot);
	for(int i=0; i<10; i++)	
	{
		if(mynot==score[i])
			counter++;
	}
	if(counter>0)
		printf("\nBu not daha �nce girilmi�");
	if(counter==0)
		printf("Bu not daha �nce girilmemi�");
	
	getch();
}
