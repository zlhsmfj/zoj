#include<stdio.h>
main()
{
int i,n,j,p;
while(scanf("%d",&n)&&n>0&&n<=100)
{
  p=1;
  for(i=0;n;)
  {
    j=n%2;
    n=n/2;
    if(!j) p=p*2;
    else break;
  }
  printf("%d\n",p);
}
}