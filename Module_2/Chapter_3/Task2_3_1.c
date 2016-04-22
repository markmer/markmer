#include <stdio.h>


int main()
{
	printf("Введите строку\n");
	char max,ch;
	max='!';
	while((ch=getchar()) !='\n' )
	{
		if (ch>=max)
			max=ch;	
	} 

	printf("Наибольший ASCII-код имеет %c \n", max);
	return 0;
}