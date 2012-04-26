#include<stdio.h>
main()
{
 int n,x,y,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d%d",&x,&y);
  if(x>=0&&y>=0)
  {
   if(x>=y)
    printf("MMM BRAINS\n");
   else printf("NO BRAINS\n");
  }
  else break;
 }
}