#include <stdio.h>
#include <string.h>

int main()
{
	char ch[228];
	int i;
	float sum,sredn;
	printf("Введите число:");
	scanf("%s",ch);
	sum=0;
	printf("Количество цифр в числе: %zd \n",strlen(ch) );
	
	for(i=0;i<=strlen(ch)-1;i++)
	 {
	 	if( ch[i]==48)
	 		continue;
	   ch[i]-=48;
	   sum+=ch[i];
	 }

    sredn=sum/i;
	printf("Cумма цифр: %.f. Их среднее арифметическое: %.2f \n",sum,sredn);   
  
    return 0;
}