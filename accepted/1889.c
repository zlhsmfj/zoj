#include<stdio.h>
main()
{
 int i,n;
 long t;

 while(scanf("%d",&n)!=EOF&&n>0&&n<=10000&&n%2!=0&&n%5!=0)
   for(t=1,i=1;;i++)
     if(t%n==0){
       printf("%d\n",i);
       break;
     }
     else t=(t*10+1)%n;
}