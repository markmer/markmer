
#include <stdio.h>

int main() 
{
	int x = 3, a = 7, c=8, m, i;
	printf("Введите длину строки: ");
    scanf("%d",&m);
    for(i = 0; i<m; i++) 
	{ 
		a = ((a*x+c) % m); 
		printf("%d ", a); 
		a=a+5;c=c+2;
	}
	printf("\n");
    return 0;
}