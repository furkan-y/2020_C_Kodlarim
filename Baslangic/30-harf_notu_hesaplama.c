#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	/* Bir öðrencinin notu 100 üzerinden giriliyor ve  harf notu karþýlýklarý
	- 90 ve üzeri  AA
	- 80 ile 90 arasý BA
	- 70 ile 80 arasý BB
	- 70 ve altý F olacak þekilde hesaplayan programý yazýnýz	*/
	
	int puan;
	printf("Öðrencinin puanýný giriniz: ");
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
