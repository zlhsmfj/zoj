/* Note:Your choice is C IDE */
#include "stdio.h"
main()
{
   int n,m,i;
   long s,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	  scanf("%d",&m);
   	  s=0;
   	  for(j=1;j<=m;j++)
   	    s=s+j*(j+1)*(j+2)/2;
   	  printf("%d %d %ld\n",i+1,m,s);  	    
   }
}   
