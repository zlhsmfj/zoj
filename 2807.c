/* Note:Your choice is C IDE */
#include "stdio.h"
main()
{
   int n,m,i,s,t,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	  scanf("%d",&m);
   	  s=0;
   	  for(j=0;j<m;j++)
   	  {
   	  	 scanf("%d",&t);
   	  	 s=s+t;
   	  }
   	  printf("%d\n",s-m+1);
   }
}   
