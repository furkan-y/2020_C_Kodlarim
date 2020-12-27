#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h> // Stringleri(dizileri) kullanmak için gerekli kütüphane


	// Bir cümlenin uzunluðunun kaç karakter olduðunu hesaplama
int main()
{	setlocale(LC_ALL,"Turkish");
	
	char *str="Bu cümlenin uzunluðunun kaç karakter olduðunu hesaplayacak"; 
	// deðiþkenin baþýna *konmuþsa kapasite maksimumdur, genelde tercih etmiyoruz
	char str2[50]="Bilgisayar Programcýlýðý";
	printf("%d",strlen(str)); // strlen=Stringlenght
	printf("\n%d",strlen(str2));
	
	printf("\n\n");
	
	// Kullanýcýdan alýnan cümledeki kelime ve a harfi sayýsýný yazdýran program
	char sentence[100];  
	int sayac=0, kelime=0;
	printf("Bir cümle giriniz: ");
	gets(sentence);
	for(int i=0; i<strlen(sentence); i+=1)	
	{
		if(sentence[i]=='a')
			sayac+=1;
		if(sentence[i]==' ')
			kelime+=1;
	}
	printf("Cümledeki a sayýsý: %d",sayac);
	printf("\nKelime sayýsý %d\n\n",kelime+1);
	
	// Index'lere tek tek harf atama
	char isim[]={'T','u','g','c','e'};
	printf("%s\n\n",isim);

	// Kullanýcýdan alýnan cümleyi önce aynen sonra yukardan aþaðý yazdýran program
	char cumle[100];
	printf("Bir cümle giriniz: ");
	gets(cumle);
	printf("\n%s",cumle);
	for(int i=0; i<strlen(cumle); i+=1)
		printf("\n%c",cumle[i]);


	getch();
}
