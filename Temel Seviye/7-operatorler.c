#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() 
{	setlocale(LC_ALL, "Turkish");

	/* 
	\n yeni sat�r
	\t tab kadar bo�luk atar
	\b Son konulan karakteri siler
	\\ Ekrana \ yazd�rma
	\" Ekrana t�rnak(") karakteri yazd�rmak i�in */
	
	printf("\t k\b \\ \"");

	int a,b,c;
	printf("\n3 tane say� giriniz : "); 
	scanf("%d %d %d", &a,&b,&c); // Ampersand a,b,c say�lar�n�n pointer adresi yani bellekteki tam olarak adresi
	printf("%d %d %d \n", a,b,c);
	printf("Total=%d \n\n", a+b+c);
	

	printf("%d \n", 3 > 4);
	printf("%d \n", 3 < 4);
	printf("%d \n", 3 == 4); // 3 e�ittir 4'e
	printf("%d \n", 3 != 4); // 3 e�it de�ildir 4'e
	printf("%d \n", 3 >= 4);
	printf("%d \n\n", 3 <= 4); // 3 k���k e�ittir 4
	
	printf("%d \n", (3 < 4) && (5 == 5) && (6 == 5));   // && Ve demektir 1 tanesi bile yanl��sa sonu� 0'd�r
	printf("%d \n", (25 < 35) || (25 == 5) || (7 < 5)); // | veya demektir 1 tanesi bile do�ruysa sonu� 1'dir
	printf("%d \n", ! (3 < 4)); // �nlem "Not" anlam�ndad�r sonucu terse �evirir
	
	
	getch();
}
