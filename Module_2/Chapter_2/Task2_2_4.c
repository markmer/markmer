#include <stdio.h> 
#include <string.h>

int main()
{
char string[255];
int i;
printf("Введите вашу слово(без пробелов и маленькими буквами):");
scanf("%s",string);
for(i=0;string[i] != 0;i++)
    string[i]-=32;
printf("-->%s\n",string);
return 0;
}