#include <stdio.h>
int main(void) 
{
	printf("Dec   Hex   Char \n");
	int i;
	printf("%3d     %#4x     NULL \n",i,i++);   
	printf("%3d     %#4x     SOH  \n",i,i++);   
	printf("%3d     %#4x     STX  \n",i,i++);   
	printf("%3d     %#4x     ETX  \n",i,i++);    
	printf("%3d     %#4x     EOT  \n",i,i++);    
	printf("%3d     %#4x     ENQ  \n",i,i++);   
	printf("%3d     %#4x     ACK  \n",i,i++);   
	printf("%3d     %#4x     BEL  \n",i,i++);   
	printf("%3d     %#4x     BS   \n",i,i++);    
	printf("%3d     %#4x     HT   \n",i,i++);   
	printf("%3d     %#4x     LF   \n",i,i++);    
	printf("%3d     %#4x     VT   \n",i,i++);    
	printf("%3d     %#4x     FF   \n",i,i++);    
	printf("%3d     %#4x     CR   \n",i,i++);   
	printf("%3d     %#4x     SO   \n",i,i++);  
	printf("%3d     %#4x     SI   \n",i,i++);    
	printf("%3d     %#4x     DLE  \n",i,i++);    
	printf("%3d     %#4x     DC1  \n",i,i++);   
	printf("%3d     %#4x     DC2  \n",i,i++);    
	printf("%3d     %#4x     DC3  \n",i,i++);   
	printf("%3d     %#4x     DC4  \n",i,i++);    
	printf("%3d     %#4x     NAK  \n",i,i++);   
	printf("%3d     %#4x     SYN  \n",i,i++);    
	printf("%3d     %#4x     ETB  \n",i,i++);    
	printf("%3d     %#4x     CAN  \n",i,i++);    
	printf("%3d     %#4x     EM   \n",i,i++);    
	printf("%3d     %#4x     SUB  \n",i,i++);    
	printf("%3d     %#4x     ESC  \n",i,i++);   
	printf("%3d     %#4x     FS   \n",i,i++);   
	printf("%3d     %#4x     GS   \n",i,i++);    
	printf("%3d     %#4x     RS   \n",i,i++);   
	printf("%3d     %#4x     US   \n",i,i++);     

	for (i=33;i<=126;i++) 
	{
		printf("%3d     %#4x    %4c\n",i,i,i);
	} 
	printf("%3d    %#4x      DEF \n",i,i);
return 0;
}