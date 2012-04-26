#include<stdio.h>
main()
{
 int n;
 while(scanf("%d",&n)&&n>=100&&n<1000)
 if(n==153||n==370||n==371||n==407)
    printf("Yes\n");
  else printf("No\n");
}
