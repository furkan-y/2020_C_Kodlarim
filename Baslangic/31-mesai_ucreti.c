#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	/* �al��anlar�na fazla mesai �creti �deyen �irket;
	- 10 saate kadar saat ba��na 5 lira,
	- 10 ile 20 saat aras�nda, saat ba��na 3 lira,
	- 20 saatten sonrasi i�in saat ba��na 2 lira �deyecektir.
	Mesai saatine kar��l�k �cretini hesaplayan bir program yaz�n�z.	*/
 
	int saat;
	printf("Mesai ka� saattir: ");
	scanf("%d",&saat);
	if(saat<=10)
		printf("�cret: %d",saat*5);
	else if(saat>10 && saat<=20)	 
 		printf("�cret: %d",10*5+(saat-10)*3); 
	else
		printf("�cret: %d",10*5+10*3+(saat-20)*2);

	getch();
}
