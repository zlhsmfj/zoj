/* Note:Your choice is C IDE */
#include "stdio.h"
#include<math.h>
#define f(i) (i)*(i)
main()
{
  double x1,y1,x2,y2,x3,y3;
  double j,k,l;
  while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
  {
  	 j=sqrt(f(x1-x2)+f(y1-y2));
  	 k=sqrt(f(x3-x2)+f(y3-y2));
  	 l=sqrt(f(x1-x3)+f(y1-y3));
     printf("%.6lf\n%.6lf\n%.6lf\n",(j+k+l)/2-k,(j+k+l)/2-l,(j+k+l)/2-j);
  }
}
