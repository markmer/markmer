#include <stdio.h>


int main()
{
	printf("Введите строку\n");
	char pred,sled;
	pred='\n';
	while((sled=getchar()) !='\n' )
	{
		if(sled != pred)
			{
				putchar(sled);
				pred=sled;
			}		

    } 
printf("\n");
return 0;
}