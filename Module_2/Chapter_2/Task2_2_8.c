#include <stdio.h>
#define PI 3.141592
#define G 9.8

int main()
{
float V,ugol,rad,sin_rad,t;
printf("Введите начальную скорость V и угол:\n");
scanf("%f %f",&V,&ugol);
rad=ugol*PI/180;
sin_rad=rad-rad*rad*rad/6+rad*rad*rad*rad*rad/120-rad*rad*rad*rad*rad*rad*rad/5040;
t=2*V*sin_rad/G;
printf("Время полета камня=%.4f секунды\n",t );
return 0;
}