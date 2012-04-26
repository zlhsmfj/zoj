/* Note:Your choice is C IDE */
#include "stdio.h"
main()
{
  int n,i,s,p,m;
  while(scanf("%d",&n)!=EOF)
  {
  	 scanf("%d",&p);
  	 s=0;
  	 for(i=0;i<n;i++)
  	 {
  	 	scanf("%d",&m);
  	    if(p==2) s=s+m*m;
  	    else if(p==1&&m>0) s=s+m;
  	    else if(p==3&&m>0) s=s+m*m*m;
  	 } 
     printf("%d\n",s);
  }
}  
