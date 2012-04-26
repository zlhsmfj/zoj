#include<stdio.h>
main()
{
  long n,i,t;
  while(scanf("%ld",&n)!=EOF)
  {
    t=0;
    for(i=1;t<n;i++)
      t=t+i;
    i--;
    if(i%2==0)
      printf("TERM %ld IS %ld/%ld\n",n,i-t+n,t-n+1);
    else
      printf("TERM %ld IS %ld/%ld\n",n,t-n+1,i-t+n);
  }
}