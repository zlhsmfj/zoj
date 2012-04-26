#include<stdio.h>
main()
{
  int n,t,i,a,b;
  while(scanf("%d",&n)!=EOF&&n>0)
  {
    scanf("%d",&a);
    t=a*6+5;
    for(i=1;i<n;i++)
    {
      scanf("%d",&b);
      if(b>a) t=t+5+6*(b-a);
      else if(a>b)  t=t+5+4*(a-b);
      else if(a=b)  t=t+5;
      a=b;
    }
    printf("%d\n",t);
  }
}