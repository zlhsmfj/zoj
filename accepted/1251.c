#include<stdio.h>
main()
{
  int n,t,s,a[50],i,j=0;
  while(scanf("%d",&n)&&n>0&&n<=50)
  {
    j++;
    t=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       t+=a[i];
    }
    t=t/n;
    s=0;
    for(i=0;i<n;i++)
      if(a[i]>t)
	 s=s+a[i]-t;
    printf("Set #%d\n",j);
    printf("The minimum number of moves is %d.\n\n",s);
 }
}