#include<stdio.h>
main()
{
  int n,d,i,u;
  while(scanf("%d%d%d",&n,&u,&d)&&d<u&&n<100&&d>0&&n>0)
  {
    for(i=0;;i++)
      if((u-d)*i+u>=n) {i=2*i+1; break;}
    printf("%d\n",i);
  }
}