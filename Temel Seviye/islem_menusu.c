#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{	setlocale(LC_ALL, "Turkish");

	int x,y,z;
	printf("1. say�y� giriniz: ");
	scanf("%d",&x);
	printf("\n2. say�y� giriniz: ");
	scanf("%d",&y);
	printf("\n---��lem Men�s�---");
	printf("\n[1] Toplama");
	printf("\n[2] ��karma");
	printf("\n[3] �arpma");
	printf("\n[4] B�lme");
	printf("\nYapmak istedi�iniz i�lem: ");
	scanf("%d",&z);
	
	
	if 		(z==1) {
		printf("Say�lar�n toplam�: %d",x+y);
	}
	else if (z==2) {
		printf("Say�lar�n fark�: %d",x-y);
	}
	else if (z==3) {
		printf("Say�lar�n �arp�m�: %d",x*y);
	}
	else if (z==4) {
		printf("Say�lar�n oran�: %f",(float)x/y);
	}
	else {
		printf("Ge�ersiz de�er girdiniz!");
	}
	
	
	getch();
}
