/* Note:Your choice is C IDE */
#include "stdio.h"
main()
{
   int n,i,j,a[12][12],s,d,t,k,l;
   while(scanf("%d",&n)!=EOF&&n<=9&&n>0) 
   {  
   	  s=t=0;
   	  for(j=1;j<=n;j++)
   	  {
   	    a[n+1][j]=0;
   	    a[j][n+1]=0;
   	  }  
   	  for(i=1;i<=n;i++)   	  	
   	    for(j=1;j<=n;j++)
   	    {
   	      scanf("%d",&a[i][j]);
   	      a[i][n+1]+=a[i][j];
   	      a[n+1][j]+=a[i][j];
   	      if(i==j) s+=a[i][j];
   	      if(i+j==n+1) t+=a[i][j];
   	    }
   	  d=0;  
   	  for(i=1;i<=n;i++)
   	    for(j=1;j<=n;j++)
   	      for(k=1;k<=n;k++)
   	       for(l=1;l<=n;l++)
   	        if(!(i==k&&j==l)&&a[i][j]==a[k][l])
   	        {
   	          printf("No\n");
   	          d=1;
   	          goto shit;
   	        }  
   	  shit: if(!d){
   	  	if(s!=t) printf("No\n");
   	    else {
   	    for(i=1;i<=n;i++)
   	      if(a[i][n+1]!=s||a[n+1][i]!=s)
   	      {
   	      	 printf("No\n");
   	         d=1;
   	         break;  
   	      }
   	    if(!d) printf("Yes\n");
   	    }
   	  }
   }	  
}
