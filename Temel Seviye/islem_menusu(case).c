#include <stdio.h> 
#include <conio.h>  
#include <locale.h> 

int main()
{	setlocale(LC_ALL, "Turkish");

// Kullan�c�dan 2 say� alarak onlarla toplama, ��karma, �arpma ve b�lme i�lemleri ger�ekle�tirebilece�i case kullan�m�yla i�lem men�s� olu�turma

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
	
	switch(secim)
	{
		case 1:
			printf("\nSay�lar�n toplam�: %d",sayi1+sayi2);break;
		case 2:
			printf("\nSay�lar�n fark�: %d",sayi1-sayi2);break;
		case 3:
			printf("\nSay�lar�n �arp�m�: %d",sayi1*sayi2);break;
		case 4:
			printf("\nSay�lar�n oran�: %f",(float)sayi1/sayi2);break;  // B�lmede b�len veya b�l�nenden birisi float olmak zorundad�r.
		default:
			printf("\nGe�ersiz bir de�er girdiniz!");break;
	}
	
	
	getch();
}
