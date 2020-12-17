#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");
	
	// Kullanýcýdan cümle ve kelime alýp geri yazdýrma

	char cumle[50];
	printf("Bir cümle giriniz: ");
	gets(cumle);	// Scanf boþluða kadar olan kýsmý alýr gets ise her þeyi.
	printf("Girdiðiniz cümle: ");
	puts(cumle);
	
	char kelime[25];
	printf("\nBir kelime giriniz: ");
	scanf("%s",kelime);  // Scanf gets'den önceki satýrlardan birinde olursa kod çalýþmaz
	printf("Girdiðiniz kelime: %s",kelime);
	
    getch();
}
