#include<stdio.h>
main()
{
  float m,n=0;
  int i;
  for(i=0;i<12;i++)
  {
    scanf("%f",&m);
    if(m<=0) break;
    else
      n=n+m;
  }
  if(m>0)
   printf("$%.2f\n",n/12);
}