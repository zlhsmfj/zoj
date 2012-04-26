/* Note:Your choice is C IDE */
#include "stdio.h"
#include<math.h>
main()
{
  double b,s,t,f;
  int n,a;   
  while(scanf("%lf %d",&b,&n)!=EOF&&!(b==0&&n==0))
  {
  	 s=pow(b,1/(double)n);
  	 a=(int)s;
  	 if(s!=a) 
  	 {	f=pow((double)a,(double)n);
  	 	t=pow((double)a+1,(double)n);
  	 	if(t-b<b-f) a++;
  	 }	
  	 printf("%d\n",a);
  }
}
