#include <stdio.h>

int main()
{
int a,b,c,d,f;			
printf("Enter the number of days - ");
scanf("%d",&a); 
b=a/365;
c=a-b*365;
d=c/30.416;
f=c-d*30.416;
printf("%d day(s)= %d year(s), %d month and %d day(s) \n",a,b,d,f );
return 0;
}