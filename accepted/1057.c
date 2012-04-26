#include<stdio.h>
#define f(a,b) (a>b)?(a-b):(b-a)
main()
{
 int n,a[50],i,p,d,q,b[50];
 scanf("%d",&n);
 while(n>0&&n<=20)
 {
    d=0;
    p=0;
    q=0;
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++)
      scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
      if(a[i]-b[i]>=2)
	 p=p+a[i];
      else if(b[i]-a[i]>=2)
	 q=q+b[i];
      else if(a[i]==1&&b[i]==2)
       p=p+6;
      else if(a[i]==2&&b[i]==1)
       q=q+6;
      else if(a[i]==b[i]) ;
      else if(a[i]-b[i]==1)
	q=q+a[i]+b[i];
      else if(b[i]-a[i]==1)
	p=p+a[i]+b[i];
     }
     printf("A has %d points. B has %d points.\n",p,q);
     scanf("%d",&n);
     if(n>0&&n<=20) printf("\n");
  }
}
