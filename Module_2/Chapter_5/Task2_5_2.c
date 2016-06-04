#include  <stdio.h>

 void invert(char * a,char * b);
 void copy(char * a,char * b);
int i,j;

int main()
{
	int k=0;
    char string1[255],string2[255],ch;
    printf("Введите строку\n");
    gets(&string1[0]); 
    while(string1[k]!='\0')
		k++;	
    printf("Чтобы копировать нажмите 'c',чтобы инвертировать - 'i'\n");
    ch=getchar();	
    switch(ch)
        {case 'c':for(i=0;string1[i]!='\0';i++)
			copy(&string1[0],&string2[0] );
        printf("Ваша строка:\n %s \n копия строки:\n %s \n",&string1[0],&string2[0] );
        break;
    	case 'i':for(i=0,j=k-1; i<k; i++, j--)
    	invert(&string1[0],&string2[0] );
    	printf("Ваша строка:\n %s \nИнвертированная строка:\n %s \n",&string1[0],&string2[0] );
    	break;
    	default:printf("Вы так и не решили\n");
   		}			
    return 0;
}

void invert(char * a,char * b)
{
	
		*(b+i) = *(a+j);
}

void copy(char * a,char * b)
{
    *(b+i) = *(a+i);

}
