#include <stdio.h>

int main()
{
	int a,i;
re:	printf("Введите процент прогресса\n");
	scanf("%d",&a);
	if(a>100)
		{printf("КПД больше 100%% это миф\n"); goto re;}
	if(a<0)
		{printf("Прогресс должен быть положительным\n");goto re;}
	putchar('[');
	if(a==0)
		goto f2;
	for(i=0;i<=a;i+=5)
			putchar('=');
f2:	for (;i<=100;i=i+5)
		putchar(' ');
	putchar(']');
	printf("\n");
 	return 0;
}