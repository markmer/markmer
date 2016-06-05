#include  <stdio.h>

 void invert(char * a,char * b);
 void copy(char * a,char * b);


int main()
{
	int k=0;
    char string1[20],ch;
    printf("Введите строку\n");
    gets(string1);
    while(string1[k]!='\0')
		k++;
	printf("длина - %d\n",k);	
	char string2[k];	
    printf("Чтобы копировать нажмите 'c',чтобы инвертировать - 'i'\n");
    ch=getchar();	
    switch(ch)
        {case 'c':
		copy(string1,string2);	
        printf("Ваша строка:\n %s \n копия строки:\n %s \n",string1,string2 );
        break;
    	case 'i':
    	printf("-------------\n");
    	invert(string1,string2 );
    	printf("Ваша строка:\n %s \nИнвертированная строка:\n %s \n",string1,string2 );
    	break;
    	default:printf("Вы так и не решили\n");
   		}			
    return 0;
}

void invert(char * a,char * b)
{	int i=0;
	char * j;
	j=a;
	while( *j!='\0'){j++;i++;}
	--i;
	 int c=0;
    while (a[c])
    {
    *b=*(a+i);
    --i;
    ++c;
    ++b;
    }
    *b='\0';	
}

void copy(char * a,char * b)
{
	while( *a!='\0'){
		*b=*a;
		a++;
		b++;
}*b='\0';}
