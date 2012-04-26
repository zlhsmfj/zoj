#include<stdio.h>
main()
{
  int f[10000],i,j,A,B,k,t;
  long n;
  f[1]=1;f[2]=1;
  while(scanf("%d%d%ld",&A,&B,&n)&&A>=1&&A<=1000&&B>=1&&B<=1000&&n>=1&&n<=100000000)
  {
    k=0;
    for(i=3;;i++)
    {
      f[i]=(A*f[i-1]+B*f[i-2])%7;
      for(j=2;j<i-2;j++)
	if(f[j]==f[i]&&f[j-1]==f[i-1])
	   {k=i-j; break;}
      if(k)  break;
    }
    if(n<=i) printf("%d\n",f[n]);
    else
    {
       t=(n-(j-1))%k;
       if(!t) t=k;
       printf("%d\n",f[j+t-1]);
    }
  }
}
