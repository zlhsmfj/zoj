#include<stdio.h>
main()
{
  int N,M,p[10000],i,m,t;
  while(scanf("%d%d",&N,&M)&&N>0&&N<=10000&&M>0&&M<=20000)
  {
    t=0;
    for(i=1;i<=N;i++)
      p[i]=0;
    for(i=0;i<M;i++){
      scanf("%d",&m);
      if(m>=1&&m<=N) p[m]++;}
    for(i=1;i<=N;i++)
      if(p[i]>=2) t++;
    printf("%d\n",t);
  }
}