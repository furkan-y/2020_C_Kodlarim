#include <stdio.h>
#include <conio.h>
#include <locale.h>

/* Recursive(�zyineli) fonksiyon kendi kendi �a��ran d�ng�d�r. 
B�t�n d�ng�ler recursive fonksiyon b�t�n recursive fonksiyonlar d�ng� olarak yaz�labilir 
Recursive fonksiyonlar�n programc� taraf�ndan anla��lmas� kolayd�r ama haf�zay� verimsiz kullan�r */
	
int	fonk(int)

int main()
{
	int x;
	printf("Fakt�riyelini almak istedi�iniz say�: ");
	scanf("%d",n);
	printf("%d",fonk(x));
	getch();
}

int fonk(int n)
{
	if(n==0)
		return 1;
	return n*fonk(n-1);
}


