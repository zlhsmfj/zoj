/* Note:Your choice is C IDE */
#include "stdio.h"
main()
{
   int a[12],n,i,j,k,l,p,q;
   scanf("%d",&n);
   while(n>6&&n<13)
   { 
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);
      for(i=0;i<=n-6;i++)
       for(j=i+1;j<=n-5;j++)
         for(k=j+1;k<=n-4;k++)
           for(l=k+1;l<=n-3;l++)
             for(p=l+1;p<=n-2;p++)
               for(q=p+1;q<=n-1;q++)
               printf("%d %d %d %d %d %d\n",a[i],a[j],a[k],a[l],a[p],a[q]);
       scanf("%d",&n);
       if(n>6&&n<13)
       	printf("\n");
	}
}
