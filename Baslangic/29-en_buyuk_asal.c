#include <stdio.h>
#include <conio.h>
#include <locale.h>

// 1 ile 1000 aras�ndaki en b�y�k asal say�y� ve ka��nc� seferde �retildi�ini ekranda g�steren program

int main()
{	setlocale(LC_ALL,"Turkish");

    int i,j,k=0,kayit,sayac=0;
    for(i=2; i<1000; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%j == 0)
                k++;
        }
            if(k==2)
        	{
            k=i;
            kayit=k;
            sayac++;
       		}
        k=0;
    }
	printf("En b�y�k asal say�: %d",kayit);
	printf("\nKa��nc� seferde �retildi: %d",sayac);
      
	getch();
}
