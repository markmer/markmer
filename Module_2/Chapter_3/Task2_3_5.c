#include <stdio.h>

int main()
{
	int a1,a2,b1,b2,c1,c2,AB,AC,CB;
	printf("Введите 2 координаты(В ДСК) для каждой из вершин треугольника АВС\n");
	printf("A:\n");
	scanf("%d %d",&a1,&a2);
	printf("B:\n");
	scanf("%d %d",&b1,&b2);
	printf("C:\n");
	scanf("%d %d",&c1,&c2);
	AB=(a1-b1)*(a1-b1)+(a2-b2)*(a2-b2);
	AC=(a1-c1)*(a1-c1)+(a2-c2)*(a2-c2);
	CB=(c1-b1)*(c1-b1)+(c2-b2)*(c2-b2);
	if((AB==AC+CB)||(AC==AB+CB)||(CB==AC+AB))
		printf("Треугольник прямоугольный\n");
	else
	printf("Треугольник не прямоугольный\n");
	return 0;
}