#include <stdio.h>

int main()
{
	int a,b,i,lim,max;
	printf("введите 2 числа:\n");
	scanf("%d %d",&a,&b);
	lim=(a>b) ? b:a;
	for(i=1;i<=lim;i++)
		{   
			if((a % i == b % i) && (a % i ==0))
			 max=i;
        }
    printf("Максимальный общий делитель : %d \n",max);
    return 0;    
}