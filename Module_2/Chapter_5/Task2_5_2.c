#include  <stdio.h>
#include <string.h>
 void invert(char * a,char * b,int j);
 void copy(char * a,char * b);


int main()
{
    char string1[255],string2[255],ch;
    printf("Введите строку\n");
    gets(&string1[0]); 
    printf("Чтобы копировать нажмите 'c',чтобы инвертировать - 'i'\n");
    ch=getchar();	
    switch(ch)
        {case 'c':copy(&string1[0],&string2[0] );
        printf("Ваша строка:\n %s \n копия строки:\n %s \n",&string1[0],&string2[0] );
        break;
    	case 'i':invert(&string1[0],&string2[0],strlen(string1)-1 );
    	printf("Ваша строка:\n %s \nИнвертированная строка:\n %s \n",&string1[0],&string2[0] );
    	break;
    	default:printf("Вы так и не решили\n");
   		}			
    return 0;
}

void invert(char * a,char * b,int j)
{
	int i;
  for(i=0; i<255; i++, j--)
		*(b+i) = *(a+j);
}

void copy(char * a,char * b)
{
   int i;
    for(i=0; i<255; i++)
    *(b+i) = *(a+i);

}
