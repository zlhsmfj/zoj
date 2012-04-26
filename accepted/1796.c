#include<stdio.h>
main()
{
 int a,b,x,y,i;
 while(scanf("%d%d",&a,&b))
 {
   i=0;
   if(a==0&&b==0)  i++;
   x=a+b;
   y=a-b;
   scanf("%d%d",&a,&b);
   if(a==0&&b==0)  i++;
     y=y+a-b;
   scanf("%d%d",&a,&b);
   if(a==0&&b==0)  i++;
     y=y+a-b;
   if(i==3) break;
   printf("Anna's won-loss record is %d-%d.\n",(x-y)/2,(x+y)/2);
 }
}