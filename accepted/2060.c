#include<stdio.h>
main()
{
 long n;
 while((scanf("%ld",&n))!=EOF&&n>=0&&n<1000000)
  if(n%8==2||n%8==6) printf("yes\n");
  else printf("no\n");
}