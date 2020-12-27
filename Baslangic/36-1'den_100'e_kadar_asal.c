#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{	setlocale(LC_ALL,"Turkish");

	// 1 ile 100 arasýndaki asal sayýlarý, kaç tane olduklarýný ve toplamlarýný yazdýran program	
	int sum,flag,counter;
	for(int i=1; i<100; i++)
	{
		for(int j=2; j<i; j++)
		{
			if(i%j==0)
				flag++;
		}
		if(flag==0)
		{
			counter++;
			printf("%d. %d\n",counter,i);
			sum+=i;
		}
		flag=0;
	}
	printf("1 ile 100 arasýndaki asal sayýlarýn toplamý: %d",sum);
	
	getch();
}
