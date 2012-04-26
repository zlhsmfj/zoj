#include<stdio.h>
main()
{
  int i,j,n,t,N;
  long k;
  scanf("%d",&N);
  for(j=0;j<N;j++)
  {
   while(scanf("%d",&n)&&n>0&&n<=10000)
   {
     t=0;
     k=0;
     for(i=1;;i++)
     {
       t=t+i;
       if(t>=n) break;
     }
     k=k+(n-t+i)*i;
     for(i--;i>0;i--)
       k=k+i*i;
     printf("%d %ld\n",n,k);
   }
   if(j<N-1) printf("\n");
 }
}
