#include <stdio.h>
 void copy(char * a,char * b);


int main()
{
    char string1[255],string2[255];
    printf("Введите строку\n");
    gets(&string1[0]);
    copy(&string1[0],&string2[0] );
    printf("Ваша строка: \n %s \nНовая строка:\n %s \n",&string1[0],&string2[0] );
    return 0;
}

void copy(char * a,char * b)
{
   int i;
    for(i=0; i<255; i++)
    *(b+i) = *(a+i);

}