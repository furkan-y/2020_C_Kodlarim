#include <stdio.h>  
#include <conio.h>  
#include <locale.h> 

int main()
{	setlocale(LC_ALL,"Turkish");

// Kullan�c�dan 2 say� alarak onlarla toplama, ��karma, �arpma ve b�lme i�lemleri ger�ekle�tirebilece�i if �art�yla i�lem men�s� olu�turma

	int sayi1,sayi2,secim;
	printf("1. say�y� giriniz: ");
	scanf("%d",&sayi1);
	printf("2. say�y� giriniz: ");
	scanf("%d",&sayi2);
	printf("\n---��lem Men�s�---");
	printf("\n[1] Toplama");
	printf("\n[2] ��karma");
	printf("\n[3] �arpma");
	printf("\n[4] B�lme");
	printf("\nYapmak istedi�iniz i�lem(1,2,3 veya 4): ");
	scanf("%d",&secim);
	
	// if ';' g�rene kadar devam eder. �f'in alt�na sadece 1 sat�r kod yazd���m�z i�in {} koymam�za gerek yok
	
	if(secim==1)  
		printf("Say�lar�n toplam�: %d",sayi1+sayi2);
	else if(secim==2)
		printf("Say�lar�n fark�: %d",sayi1-sayi2);
	else if(secim==3)
		printf("Say�lar�n �arp�m�: %d",sayi1*sayi2);
	else if(secim==4)
		printf("Say�lar�n oran�: %f",(float)sayi1/sayi2);  // de�i�kenlerden birini (float)'a �evirerek kalanl� b�lme yap�l�r
	else
		printf("Ge�ersiz de�er girdiniz!");
	
	getch();
}
