#include<stdio.h>
#include<math.h>
int f(int a,int b)
{
  int t;
  while(b)
  {
    t=b;b=a%b;a=t;}
  return t;
}
main()
{
  int n,a[50],i,k,j;
  while(scanf("%d",&n)!=EOF&&n>1&&n<500)
  {
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(k=0,i=0;i<n-1;i++)
      for(j=i+1;j<n;j++)
       if(f(a[i],a[j])==1) k++;
    if(k==0) printf("No estimate for this data set.\n");
    else printf("%.6f\n",sqrt((float)n*(n-1)*3/k));
  }
}