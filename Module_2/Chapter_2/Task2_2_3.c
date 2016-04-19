#include <stdio.h>
#include <string.h>

int main()
{
char string[254];
printf("Введите вашу строку:\n");
gets(string);
printf("Длина вашей строки %zd байт\n",strlen(string)+1 );
return 0;
}