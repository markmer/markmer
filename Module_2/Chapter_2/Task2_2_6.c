#include <stdio.h>

int main()
{	
	long int n,i,f;
	printf("Введите ваше неотрицательное число\n");
	scanf("%ld",&n);
	i=0;
	f=1;
	while (i<n)
		{
			f=f*(n-i);
		    i++;
		}
	printf("факториал = %ld \n",f);
	return 0; 
}		 