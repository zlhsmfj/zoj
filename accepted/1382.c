#include<stdio.h>
main()
{
  long n;
  int i,d,p;
  scanf("%d",&d);
  if(d>0&&d<=10)
    for(i=0;i<d;i++)
    {
      scanf("%ld",&n);
      if(n>=1&&n<=1000000) {
	p=0;
	while(!(n%2)) {p++; n=n/2;}
	printf("%ld %d\n",n,p);
      }
    }
}