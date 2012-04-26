#include<stdio.h>
main()
{
 long t,i,n;
 double f;
 int m,j;
 scanf("%d",&m);
 for(j=0;j<m;j++)
 {
   scanf("%ld",&t);
   if(t>=1&&t<=1E+7){

   f=1;
   n=0;
   for(i=1;i<=t;i++)
   {
     f=f*i;
     if(f/10>=1)
      do{
       f=f/10;
       n++;
     }while(f/10>=1);
   }
   printf("%ld\n",n+1);
   }
 }
}
