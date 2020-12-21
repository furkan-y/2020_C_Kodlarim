#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	/* Çalýþanlarýna fazla mesai ücreti ödeyen þirket;
	- 10 saate kadar saat baþýna 5 lira,
	- 10 ile 20 saat arasýnda, saat baþýna 3 lira,
	- 20 saatten sonrasi için saat baþýna 2 lira ödeyecektir.
	Mesai saatine karþýlýk ücretini hesaplayan bir program yazýnýz.	*/
 
	int saat;
	printf("Mesai kaç saattir: ");
	scanf("%d",&saat);
	if(saat<=10)
		printf("Ücret: %d",saat*5);
	else if(saat>10 && saat<=20)	 
 		printf("Ücret: %d",10*5+(saat-10)*3); 
	else
		printf("Ücret: %d",10*5+10*3+(saat-20)*2);

	getch();
}
