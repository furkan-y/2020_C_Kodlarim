#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Kullan�c�dan c�mle ve kelime al�p geri yazd�rma

	char cumle[50];
	printf("Bir c�mle giriniz: ");
	gets(cumle);	// Scanf bo�lu�a kadar olan k�sm� al�r gets ise her �eyi.
	printf("Girdi�iniz c�mle: ");
	puts(cumle);
	
	char kelime[25];
	printf("\nBir kelime giriniz: ");
	scanf("%s",kelime);  // Scanf gets'den �nceki sat�rlardan birinde olursa kod �al��maz
	printf("Girdi�iniz kelime: %s",kelime);
	
    getch();
}
