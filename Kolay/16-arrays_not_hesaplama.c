#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*  1. 10 öðrencinin notlarý alýnýp ortalama,max,min deðerlerini yazdýr. 
	2. Kullanýcýdan bir not al ve bu notun daha önce girilip girilmediðini kontrol et ve bunu da yazdýr.	*/
		
int main()
{	setlocale(LC_ALL,"Turkish");

	int score[10],min,max,ort,total;
	printf("1. öðrencinin notunu giriniz: ");
	scanf("%d",&score[0]);
	min=score[0];
	for(int i=1; i<10; i++)
	{
		printf("%d. öðrencinin notunu giriniz: ",i+1);
		scanf("%d",&score[i]);
		total+=score[i];
		if(score[i]>max)
			max=score[i];
		if(score[i]<min)
			min=score[i];
	}
	printf("\nEn yüksek puan: %d",max);
	printf("\nEn düþük puan: %d",min);
	printf("\nOrtalama puan: %f\n\n",(float)total/10);
	
	int mynot,counter;
	printf("Bir not giriniz: ");	scanf("%d",&mynot);
	for(int i=0; i<10; i++)	
	{
		if(mynot==score[i])
			counter++;
	}
	if(counter>0)
		printf("\nBu not daha önce girilmiþ");
	if(counter==0)
		printf("Bu not daha önce girilmemiþ");
	
	getch();
}
