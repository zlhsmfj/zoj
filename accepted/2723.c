/* Note:Your choice is C IDE */
#include "stdio.h"
main()
{
  int d,a[1000001];
  long n,i,j,k,b[250000];
  for(i=1;i<=1000000;i++)
    a[i]=1;
  for(j=0,i=2;i<=1000000;i++) 
    if(a[i]==1)
    {
      b[j]=i;
      j++;	 
      for(k=2;i*k<=1000000;k++)
        a[i*k]=0;
    }
  while(scanf("%ld",&n)!=EOF&&n>=2&&n<=1000000)
  { 
   for(i=0;i<j&&n>b[i];i++)
   {
   	  d=0;
      if(n%b[i]==0&&a[n/b[i]]==1)
       {printf("Yes\n");d=1;break;}
   }
   if(!d) printf("No\n");
  }
}  
         
