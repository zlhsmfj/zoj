/* Note:Your choice is C IDE */
#include "stdio.h"
#include<string.h>
main()
{
   char c,d;
   int n,i,s;
   while((c=getchar())!=EOF)
   if(c>='A'&&c<='Z') 
   {
   s=0;
   i=0;
   while(c!='\n')
   {
   	 if(c>='A'&&c<='Z')
   	    s=s+(i+1)*(c-'A'+1);
   	 i++;   
   	 d=getchar();
   	 if(c==' '&&d=='\n') return 0;   
   	 else c=d;
   }	 
   printf("%d\n",s);
   }
   else if(s=='#') break;
}
