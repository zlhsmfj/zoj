#include "stdio.h"
main()
{
  float a[6][6],q;
  int i,j,n,m,k,p,b[12];
  scanf("%d",&n);
  for(k=0;k<n;k++)
  {
  	 for(i=1;i<=5;i++)
  	   for(j=1;j<=5;j++)
  	    scanf("%f",&a[i][j]);
  	 while (scanf("%d",&m)&&m>0&&m<=10)
  	 {
  	 	for(p=1;p<=m;p++)
  	 	  scanf("%d",&b[p]);
  	 	scanf("%f",&q);
  	 	b[0]=1;
  	 	b[m+1]=1;
  	 	for(p=1;p<=m+1;p++)
  	 	  q=q*a[b[p-1]][b[p]];
  	 	if((int)(q*1000)%10>=5)
  	 	   q=q+0.01;
  	 	if(q<1) printf("0\n");
  	 	else printf("%.2f\n",q);
  	 }
  	 if(k<n-1) printf("\n");
  }
}
