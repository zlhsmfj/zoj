#include<stdio.h>
main()
{
 long t,k,i;
 long n;
 scanf("%ld",&n);
 if(n>=1&&n<=1000000000)
   for(i=0;i<n;i++)
   {
     scanf("%ld",&t);
     k=0;
     while(t)
     {
       t=t/5;
       k=k+t;
     }
     printf("%ld\n",k);
   }
   else return 0;
}