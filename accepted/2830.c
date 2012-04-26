#include<stdio.h>
main()
{
 long n;
 while(scanf("%ld",&n)&&n>0&&n<1000000000)
 printf("%ld\n",n/2);
 }