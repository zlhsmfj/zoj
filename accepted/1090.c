#include<stdio.h>
#include<math.h>
#define f(a) sqrt(a)
#define m(a) (a)*(a)
#define pi 3.141592653589793
main()
{
  double x1,y1,x2,y2,x3,y3,a,b,c,p,s,t,k;
  while((scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3))!=EOF)
  {
    a=f(m(x2-x1)+m(y2-y1));
    b=f(m(x2-x3)+m(y2-y3));
    c=f(m(x1-x3)+m(y1-y3));
    p=(a+b+c)/2;
    s=f((p-a)*(p-b)*(p-c)*p);

    k=pi*a*b*c/(2*s);
    printf("%.2lf\n",k);
    }
}
