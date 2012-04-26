#include<stdio.h>
#define f(n) (n)*(n)
main()
{
  float a,b,t,r1,r2;
  while((scanf("%f%f%f%f",&a,&b,&r1,&r2))!=EOF&&a>0&&b>0&&r1>0&&r2>0)
  {
   if((a-r1-r2)<0||(b-r1-r2)<0) printf("No\n");
   else {
     t=f(a-r1-r2)+f(b-r1-r2);
     if(t>=f(r1+r2)) printf("Yes\n");
     else printf("No\n");
   }
  }
}