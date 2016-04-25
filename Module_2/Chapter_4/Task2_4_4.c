#include <stdio.h>
#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))

int pr227(int n);

int main()
{
	int N,j;
	printf("введите количество пар N\n");
	scanf("%d",&N);
	printf("%3s %3s %6s\n","a","b","max(a,b)");
	for (j=1;j<=N;j++)
		printf("%3d %3d %6d\n",pr227(j+5),pr227(j+12),MAX(pr227(j+5),pr227(j+12)));
	putchar('\n');
	return 0;
}



int pr227(int m)
{
	int x = 3, a = 7, c=8, i;	
    for(i = 0; i<m; i++) 
	{ 
		a = ((a*x+c) % m); 
		a=a+5;c=c+2;
	}
    return a;
}
