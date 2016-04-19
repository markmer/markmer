#include <stdio.h>

int main()
{
	int a,b;
printf("Введите ваши 2 числа:\n");
scanf("%d %d",&a,&b);
printf("Cумма ваших чисел:%d; Разность:%d; Произведение:%d; Частное:%d\n",a+b,a-b,a*b,a/b);
return 0;
}