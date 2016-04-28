
#include <stdio.h>
#include <string.h>


int main(void)
{
	char string[255];
	int b[80]={0,0,0,0},i=0,j,length;
	char begin[]="1234567890QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm`~!@#$%^&*(){}[];'\"\\/,.<>";
	printf("Введите строку:\n");
	while ( (string[i] = getchar()) != '\n')
		i++;
	printf("Символы в порядке возрастания их количества в строке:");
	length=strlen(string);
	for(i=0;i<length;i++)
	{
		for(j=0;j<79;j++)
		{
			if(begin[j]==string[i])
				b[j]+=1;
		}
	}
	for(i=0;i<=length;i++)
	{
		for(j=0;j<80;j++) 
        {
           if(b[j]!=0 && b[j]==i)
			{
				printf("%c ",begin[j]);
			}
		}
	}
	printf("\n");
	return 0;
}

