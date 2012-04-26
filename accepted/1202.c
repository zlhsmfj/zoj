#include<stdio.h>
int c(int a,int b)
{
  int i;
  int m=1;
  for(i=0;i<b;i++)
    m=m*(a-i)/(i+1);
  return m;
}

main()
{
  int t;
  int n,k,a[12],i,s,j;
  while(scanf("%d",&n)&&n>0&&n<=12)
  {
    s=0;
    t=1;
    k=0;
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      if(a[i]<=0||a[i]>12)
	{k=1;  exit(-1);}
      s=s+a[i];
      t=c(s,a[i])*t;
    }
    for(i=0;i<n-1;i++)
      if(a[i]>0)
       for(k=1,j=i+1;j<n;j++)
	 if(a[j]==a[i]) { k++;t=t/k;a[j]=j-16; }

    printf("%d\n",t);
   }
 }
