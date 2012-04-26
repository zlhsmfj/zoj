#include<stdio.h>
main()
{
  int A,B;
  int i,j,k;
  while(scanf("%d%d%d",&i,&j,&k)!=EOF)
  {
    A=(k-2*j+i)/2;
    B=(4*j-3*i-k)/2;
    printf("%d %d %d\n",9*A+3*B+i,16*A+4*B+i,25*A+5*B+i);
  }
}