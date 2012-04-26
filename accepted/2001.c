#include<stdio.h>
int f(int a)
{
  int t,m=0;
  while(a)
  {
   t=a%10;
   m=m*10+t;
   a=a/10;
  }
  return m;
}
main()
{
  int n,i,a,b;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d%d",&a,&b);
    printf("%d\n",f(f(a)+f(b)));
  }
}