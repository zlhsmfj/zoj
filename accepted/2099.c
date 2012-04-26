#include<stdio.h>
main()
{
  long a[100],b[100],x1,x2,y1,y2;
  int i;
  scanf("%ld%ld",&a[0],&b[0]);
  if(a[0]!=0||b[0]!=0)
  while(1){
    x1=x2=a[0];
    y1=y2=b[0];
    for(i=1;;i++)
    {
      scanf("%ld%ld",&a[i],&b[i]);
      if(a[i]!=0||b[i]!=0)
      {
	 if(x1>a[i]) x1=a[i];
	 if(x2<a[i]) x2=a[i];
	 if(y1>b[i]) y1=b[i];
	 if(y2<b[i]) y2=b[i];

      }
      else{
       printf("%ld %ld %ld %ld\n",x1,y1,x2,y2);
	scanf("%ld%ld",&a[0],&b[0]);
	break;
      }
    }
    if(a[0]==0&&b[0]==0)
      break;
  }
}
