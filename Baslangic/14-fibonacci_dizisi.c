#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define degisken 5 /* Programda degisken gördüðü her yere 5 sayýsýný atar
while döngüsünün içine 0 yazýlýrsa çalýþmaz onun dýþýndaki tüm sayýlar doðruyu ifade eder
böyle olursa sonsuz döngüye girer Pause Break ile döngü kýrýlabilir */

// Fibonacci sayý dizisinin ilk 12 sayýsýný ekrana yazdýran program  1,1,2,3,5,8...

int main()
{	setlocale(LC_ALL,"Turkish");
	
	int sayi1=1;
	int sayi2=1;
	int toplam;
	printf("%d,%d,",sayi1,sayi2);  // Ýlk 2 sayý 1 ve 1'i yazdýrdýk
	
	for(int i=1; i<=10; i++)  // 12 sayýyý istediði için 2 sayýyý yukarýda 10 sayýyý burada yazdýracaðýz
	{
		toplam=sayi1+sayi2;  // Toplam deðiþkenine 1. ve 2. sayýyý toplayýp kaydedip yazdýrdýk
		printf("%d,",toplam); // Sürekli 2.'yi 1. sayýya ve 2 sayýnýn toplamýný 2. sayýya yazdýrarak döngüyü devam ettirdik
		sayi1=sayi2;
		sayi2=toplam;
	}
	
    getch();
}
