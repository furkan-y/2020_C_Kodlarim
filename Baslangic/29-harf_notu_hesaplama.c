#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	/* Bir ��rencinin notu 100 �zerinden giriliyor ve  harf notu kar��l�klar�
	- 90 ve �zeri  AA
	- 80 ile 90 aras� BA
	- 70 ile 80 aras� BB
	- 70 ve alt� F olacak �ekilde hesaplayan program� yaz�n�z	*/
	
	int puan;
	printf("��rencinin puan�n� giriniz: ");
	scanf("%d",&puan);
	if(puan>=90)
	printf("AA");
	else if(puan>=80)
    printf("BA");
    else if(puan>=70)
    printf("BB");
    else
    printf("F");
    
    getch();
}
