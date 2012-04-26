/* Note:Your choice is C IDE */
#include "stdio.h"
#include<math.h>
main()
{
   long i;
   int m;
   while(scanf("%ld",&i)!=EOF&&i>0)
   {
   	 m=0;
     while(i!=1)
      {
      	i=ceil((double)i/2);
        m++;
      }  
     printf("%d\n",m);
   }
}   
