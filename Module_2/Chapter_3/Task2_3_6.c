#include <stdio.h>

int main()
{
	int a,i;
	printf("Введите процент прогресса\n");
	scanf("%d",&a);
	if(a>100)
		{printf("КПД больше 100%% это миф\n"); return 0;}
	putchar('[');
	for(i=0;i<=a;i=i+5)
		putchar('=');
	for (;i<=100;i=i+5)
		putchar(' ');
	putchar(']');
	printf("\n");
	return 0;
}