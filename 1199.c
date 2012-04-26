/* Note:Your choice is C IDE */
#include "stdio.h"
main()
{
  int x1,y1,r1,x2,y2,r2,n,p,q;
  float x,y;
  scanf("%d",&n);
  while(n--)
  {
   scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
   p=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
   q=(r1-r2)*(r1-r2);
   if(q>=p||r1==r2) printf("Impossible.\n");
   else {
  	x=r2*x1-r1*x2;
  	if(x<0) x=-x;
  	y=r2*y1-r1*y2;
  	if(y<0) y=-y;
  	p=r1-r2;
  	if(p<0) p=-p;
    printf("%.2f %.2f\n",x/p,y/p);
   }
  }
}  
  
