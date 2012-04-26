#include "stdio.h"
main()
{
  int n,i,s,t;
  int f;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	  scanf("%d %d",&s,&t);
  	  f=s*t;
  	  if(f%2==0)
     	 printf("Scenario #%d:\n%d.00\n\n",i+1,f);
      else printf("Scenario #%d:\n%d.41\n\n",i+1,f);
  }  
}
