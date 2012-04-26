#include<stdio.h>
main()
{
  int i;
  long t=2;
  double e=2.5;
  printf("n e\n- -----------\n");
  printf("0 1\n1 2\n2 2.5\n");

  for(i=3;i<=9;i++)
  {
    t=i*t;
    e=e+(double)1/t;
    printf("%d %.9f\n",i,e);
  }
}