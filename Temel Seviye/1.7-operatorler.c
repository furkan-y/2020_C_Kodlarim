#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() 
{	setlocale(LC_ALL, "Turkish");

	/* 
	\n yeni satýr
	\t tab kadar boþluk atar
	\b Son konulan karakteri siler
	\\ Ekrana \ yazdýrma
	\" Ekrana týrnak(") karakteri yazdýrmak için */
	
	printf("\t k\b \\ \"");

	int a,b,c;
	printf("\n3 tane sayý giriniz : "); 
	scanf("%d %d %d", &a,&b,&c); // Ampersand a,b,c sayýlarýnýn pointer adresi yani bellekteki tam olarak adresi
	printf("%d %d %d \n", a,b,c);
	printf("Total=%d \n\n", a+b+c);
	

	printf("%d \n", 3 > 4);
	printf("%d \n", 3 < 4);
	printf("%d \n", 3 == 4); // 3 eþittir 4'e
	printf("%d \n", 3 != 4); // 3 eþit deðildir 4'e
	printf("%d \n", 3 >= 4);
	printf("%d \n\n", 3 <= 4); // 3 küçük eþittir 4
	
	printf("%d \n", (3 < 4) && (5 == 5) && (6 == 5));   // && Ve demektir 1 tanesi bile yanlýþsa sonuç 0'dýr
	printf("%d \n", (25 < 35) || (25 == 5) || (7 < 5)); // | veya demektir 1 tanesi bile doðruysa sonuç 1'dir
	printf("%d \n", ! (3 < 4)); // Ünlem "Not" anlamýndadýr sonucu terse çevirir
	
	
	getch();
}
