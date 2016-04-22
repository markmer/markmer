#include <stdio.h>
#include <math.h>


int main(void)
{	
	float a,b,c,x1,x2,D;
	printf("Введите коэффициенты квадратного уравнения:ax^2+bx+c\n");
	scanf("%f %f %f ",&a,&b,&c);
	D=b*b-4*a*c;
	if (D<0)
		{printf("Ошибка,корни комплексные..\n");
		return 0;}
	x1=(-b+ sqrt(D))/(2*a);
	x2=(-b- sqrt(D))/(2*a);
	printf("x1=%.2f ; x2=%.2f \n",x1,x2 );
	if(x1==x2)
		printf("Корни совпадают\n");
	return 0;
}