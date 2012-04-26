#include<stdio.h>
main()
{
 int n,a[11][3],i,t;
 while(scanf("%d",&n)&&n>=1&&n<=10)
 {
  a[0][0]=a[0][1]=a[0][2]=0;
  for(t=0,i=1;i<=n;i++)
  {
    scanf("%d%d",&a[i][1],&a[i][2]);
    if(a[i][1]>0&&a[i][2]>0&&a[i][2]>a[i-1][2])
      t=t+a[i][1]*(a[i][2]-a[i-1][2]);
  }
  printf("%d miles\n",t);
 }
}
