#include <stdio.h>
#include <conio.h>
#include <locale.h>

/* Recursive(Özyineli) fonksiyon kendi kendi çaðýran döngüdür. 
Bütün döngüler recursive fonksiyon bütün recursive fonksiyonlar döngü olarak yazýlabilir 
Recursive fonksiyonlarýn programcý tarafýndan anlaþýlmasý kolaydýr ama hafýzayý verimsiz kullanýr */
	
int	fonk(int)

int main()
{
	int x;
	printf("Faktöriyelini almak istediðiniz sayý: ");
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


