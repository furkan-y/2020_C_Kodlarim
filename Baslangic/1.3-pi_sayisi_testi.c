#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	// Pi say�s�n� virg�lden sonraki 3 hanesiyle isteyen ve s�yleyen program	
	float deger, pi=3.1415;
	printf("L�tfen pi say�s�n� virg�lden sonraki 3 hanesiyle beraber giriniz: ");
	scanf("%f",&deger); // scanf de�er �ekmeye yarar
	printf("Girdi�iniz de�er: %.3f \t Do�ru cevap: %.3f",deger,pi);  
	// %.3f ifadesi virg�lden sonra 3 hane yazd�rmaya yarar. \t 1 tab bo�luk b�rakt�r�r
	
    getch();
}
