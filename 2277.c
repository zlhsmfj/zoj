/* Note:Your choice is C IDE */
#include "stdio.h"
#include<math.h>
main()
{
  long n;
  double t;
  while(scanf("%ld",&n)!=EOF)
  {
  	t=log10((double)n);
  	t=t*n;
  	t=pow((double)10,t-(long)t);
  	printf("%d\n",(int)t);
  }	   
}
