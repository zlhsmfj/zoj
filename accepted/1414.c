#include<stdio.h>
main()
{
 int n,i,x,y;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d%d",&x,&y);
   if((x+y)%2==1)
     printf("No Number\n");
   else if(x%2==0)
     printf("%d\n",x+y);
   else
     printf("%d\n",x+y-1);
 }
}