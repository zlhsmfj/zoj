/* Note:Your choice is C IDE */
#include "stdio.h"
#include<string.h>
main()
{
   char a[80],t[80][3];
   int n,i,j,d,k;
   while(scanf("%s",a)!=EOF&&a[0]!='*')
   {
   	 n=strlen(a);
   	 d=0;
   	 for(i=0;i<n-1;i++)
   	 {  
   	   for(j=0;j<n-1-i;j++)
   	   {
   	   	  t[j][0]=a[j];
   	      t[j][1]=a[j+i+1];
   	      t[j][2]='\0';
   	   }
   	   for(j=0;j<n-2-i;j++)
   	     for(k=j+1;k<n-1-i;k++)
   	       if(strcmp(t[j],t[k])==0){d=1; printf("%s is NOT surprising.\n",a);break;}
   	   if(d) break;    
   	 }
   	 if(!d) printf("%s is surprising.\n",a);
   }	 
}

