#include <stdio.h>
#define COMP(I,J) printf("Введите коэффициенты для \
сопротивления "#I"+"#J"*i:\n "#I"= ")
#define sqr(X) ((X)*(X))


int main()
{
	float a,b,c,d,x,y,q,k,R1,R2;
	COMP(a,b);
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	COMP(c,d);
	scanf("%f",&c);
	printf("d=");
	scanf("%f",&d);
	x=a+c;
	y=b+d;
	k=a*c-b*d;
	q=a*d+b*c;
	R1=(k*x-q*y)/(sqr(x)+sqr(y));
	R2=(k*y+q*x)/(sqr(x)+sqr(y));
	printf("Полученное сопротивление %f + (%f)*i \n",R1,R2 );
	return 0;
}