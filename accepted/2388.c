#include<stdio.h>
main()
{
 int a,b,n,i,s,t,h;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d%d",&a,&b);
   if((a+b)%2==0&&a>=b){
       t=(a+b)/2;
       s=(a-b)/2;
       printf("%d %d\n",t,s);}
   else if(a<0)  break;
   else printf("impossible\n");
   }
}