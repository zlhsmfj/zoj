/* Note:Your choice is C IDE */
#include "stdio.h"
main()
{
    int n,i,s,q,d,m,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&s);
      q=s/25;
      s=s%25;
      d=s/10;
      s=s%10;
      m=s/5;
      p=s%5;
      printf("%d %d QUARTER(S), %d DIME(S), %d NICKEL(S), %d PENNY(S)\n",i+1,q,d,m,p);
     } 
}
