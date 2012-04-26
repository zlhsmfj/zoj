#include<stdio.h>
main()
{
  int N,j,n,m,a,b,i,t;
  scanf("%d",&N);
  for(i=0;i<N;i++)
  {
    j=0;
    while(scanf("%d%d",&n,&m)&&n>0&&n<=100)
    {
      j++;
      t=0;
      for(b=1;b<n;b++)
	    for(a=1;a<b;a++)
	      if((a*a+b*b+m)%(a*b)==0) t++;
      printf("Case %d: %d\n",j,t);
    }
    if(i<N-1) printf("\n");
 }
}
