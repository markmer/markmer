
#include <stdio.h>

int main()
{
	int i,j,k,m,f,n,p;
	long long int fact_i,fact_k,fact_ik,ch;
	printf("введите число строк треугольника паскаля\n");
	scanf("%d",&n);
	n-=1;
	for(i=0;i<=n;i++)
		{			
			for(j=0;j<=(4*(n-i));j++)
				putchar(' ');
			for(k=i;k>=0;k--)
				{
					fact_k=1;
					for(f=k;f<i;f++)
						fact_k*=(f+1);
					fact_ik=1;
					for(p=0;p<i-k;p++)
						fact_ik*=((i-k)-p);
					ch=fact_k/fact_ik;					
					printf("%-8lld",ch);
				}
        printf("\n");

		}

printf("\n");
return 0;
}