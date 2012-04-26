/* Note:Your choice is C IDE */
#include "stdio.h"
main()
{
   long n,a[100001],i;
   int d;
   while(scanf("%ld",&n)!=EOF&&n>0)
   {
   	 for(i=1;i<=n;i++)
   	   scanf("%ld",&a[i]);
   	 d=0;  
   	 for(i=1;i<=n;i++)
   	   if(a[a[i]]!=i)
   	    { d=1;printf("not ambiguous\n");break;}
   	 if(!d) printf("ambiguous\n");
   }	        
}
