/* Note:Your choice is C IDE */
#include "stdio.h"
main()
{
   int n,m,i,j,d,a[11][11];
   while(scanf("%d%d",&n,&m)!=EOF&&!(m==0&&n==0))
   {
     d=0;
     for(i=0;i<=n;i++)
     {
       a[0][i]=-1;
       a[i][0]=-1;
     }  
   	 for(i=1;i<=n;i++)
   	   for(j=1;j<=n;j++)
   	     scanf("%d",&a[i][j]);
   	 for(i=1;i<=n;i++)
   	   for(j=1;j<=n;j++)
   	    if(a[i][j]==0)
   	    {
   	      d=1;
   	      if(a[i-1][j]==0||a[i][j-1]==0)
   	      {  
   	      	d++;
   	       	printf("No\n"); 
   	        goto end;
   	      }  
   	    }
   	 if(!d) printf("No\n");
   	 else if(d==1)  printf("Yes\n");
   	 end:;
   } 
}

