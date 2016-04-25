#include <stdio.h>
#include <assert.h>

int main()
{
	int i;
	float a,b,d;
	char c;
	printf("Калькулятор запрашивает операцию (например 2+2), введите данные,");
	printf("в случае недопустимых операций калькулятор выдаст ошибку:\n");

	while(scanf("%f %c %f",&a,&c,&b))
	{ switch(c)
	 {
		case '+': printf("=%g\n",a+b);
				  break;
		case '-': printf("=%g\n",a-b);
		          break;
		case '*': printf("=%g\n",a*b);
			 	  break;
		case '/': assert(b>0);	
				  	printf("=%g\n",a/b);
				  break;
		case '%': assert(b>1);
				  printf("=%d\n",(int)a%(int)b);
				  break; 
		case '^': assert(b>=0);
				  assert(b==(int)b);
				  d=1;
                  for(i=1;i<=b;i++)
                  	d*=a;
				  printf("=%g\n",d);
				  break;
		default: printf("Извините, но такой функции нет!\n");		  		  		  	 	         		  	
     }
     printf("Наберите off для окончания или вводите слудующую операцию:\n");
    }
 printf("вычисления завершены\n");
 return 0;   
}
