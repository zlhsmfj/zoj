#include<stdio.h>
main()
{
 int p,n,i,k,m,j,a[101];
 scanf("%d",&p);
 for(i=0;i<p;i++)
 {
    m=0;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
       a[j]=1;
    for(j=2;j<=n;j++)
       for(k=1;k*j<=n;k++)
	 if(a[k*j]) a[k*j]=0;
	 else a[k*j]=1;
    for(j=1;j<=n;j++)
       if(a[j]) m++;
    printf("%d\n",m);
 }
}