#include<stdio.h>
#define g(a) (a)*(a)
#define f(x,y,z) g(x-a)+g(y-b)+g(z-c)
main()
{
   long v[16][3],i,j,a,b,c,k=0;
   long t;
   for(i=0;i<16;i++)
     for(j=0;j<3;j++)
       scanf("%ld",&v[i][j]);
   while(scanf("%ld%ld%ld",&a,&b,&c)&&a>=0&&a<=255&&b>=0&&b<=255&&c>=0&&c<=255)
   {
      t=f(v[0][0],v[0][1],v[0][2]);
      for(k=0,i=1;i<16;i++)
	if(f(v[i][0],v[i][1],v[i][2])<t)
	  {t=f(v[i][0],v[i][1],v[i][2]);k=i;}
      printf("(%ld,%ld,%ld) maps to (%ld,%ld,%ld)\n",a,b,c,v[k][0],v[k][1],v[k][2]);
   }
}