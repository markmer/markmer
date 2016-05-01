#include <stdio.h>
#include <stdlib.h>

int main () 
{
	FILE *f1;
   	FILE *f2;
	char letter;
	char key[6]={'1', '0', '1', '1', '1', '0'};
	int i=0;
    f1=fopen("begin.txt", "rb");
    f2=fopen("results.txt", "wb");
    printf("результаты выведутся в файле results.txt");
    while(feof(f1) == 0) {
        fread(&letter, 1, 1, f1);
        if(letter != '\n') 
        {
            i = (i == 6) ? i : 0;
            letter^=key[i];
            i++;
        }
        fwrite(&letter, 1, 1, f2);
    }	
    fclose(f1);
    fclose(f2);
    return 0;
}
