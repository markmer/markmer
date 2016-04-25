#include <stdio.h>
long Fib(int n)
{
	if(n>2)
		return Fib(n-1)+Fib(n-2);
	else
		return 1;
}


int main()
{
	int n,i;
	printf("Введите желаемое количество чисел последовательности Фибоначчи\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("%ld  ",Fib(i) );
	putchar('\n');
	return 0;
}