#include<stdio.h>
#define pi 3.1415927
main()
{
  int i=0;
  long r;
  float d,t,s,v;
  while(scanf("%f%ld%f",&d,&r,&t)&&d>0&&r>0&&t>0)
  {
     i++;
     s=pi*d*r/12/5280;
     v=s*3600/t;
     printf("Trip #%d: %.2f %.2f\n",i,s,v);
  }
}