#include <stdio.h>
 void copy(char * a,char * b);

int main()
{
	int k;
    char string1[20];
    printf("Введите строку\n");
    scanf("%s",string1);
    for(k=0;string1[k]!='\0';k++);
    printf("длина - %d\n",k);
    char string2[k];
    
		copy(string1,string2);
	
    printf("Ваша строка: \n %s \nНовая строка:\n %s \n",string1,string2 );
    return 0 ;
}

void copy(char * a,char * b)
{
	while( *a!='\0'){
		*b=*a;
		a++;
		b++;
}
*b='\0';}
