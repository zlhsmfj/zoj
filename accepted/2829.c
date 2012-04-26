#include<stdio.h>
main()
{
  long N;
  int a[]={3,5,6,9,10,12,15};
  while(scanf("%ld",&N)!=EOF&&N>=1&&N<=100000)
  {   if(N%7)
	 N=N/7*15+a[N%7-1];
      else N=N/7*15;
      printf("%ld\n",N);}
}