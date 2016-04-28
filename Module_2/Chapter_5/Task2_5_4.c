#include <stdio.h>
 

 int vibor(char symvol)
   { 
    switch (symvol)
      {  int r1,r2,r3; 
        case '(' : return  1;
        case '[' : return  2;
        case '{' : return  3;
        case '<' : return  4;
        case ')' : return -1;
        case ']' : return -2;
        case '}' : return -3;
        case '>' : return -4;  
        case '"' : if((r1++ % 2) ==0)   return 5;
        else return -5;
        case '\'': if((r2++ % 2) ==0)  return 6;
        else return -6;
        case '`' : if((r3++ % 2) ==0)  return 7;
        else return -7;
        default:return 0;
      }
   } 
int main(void)
{
    char string[255],d;
    int s[255];
    int a,i=0,found=0,j=0;
    printf("Введите строку без пробелов\n");
    scanf("%s",string);
    do
    {   d=string[j++];
        a=vibor(d);
        if(a>0)
         {   s[i]=a;
             i++;
         }
             if(a<0)
             {     if(i>0 && (s[i-1]+a)==0)
                   i--;
                   else
                {   found=1;
                    break;
                }
            }
    }
    while (d);
        if(!i && !found)
        printf("Баланс соблюден\n");
        else
        printf("Баланс не соблюден\n");

        return 0;
}


