#include<stdio.h>
main()
{
 int x,y,z;
 scanf("%d%d%d",&x,&y,&z);
 if(x>0&&x<=300&&y>0&&y<=300&&z<=300&&z>0)
 {
  if(x<=168&&y<=168&&z<=168) printf("NO CRASH\n");
  else{
    printf("CRASH ");

    if(x<=168) printf("%d\n",x);
    else if(y<=168) printf("%d\n",y);
    else printf("%d\n",z);
  }
 }
}