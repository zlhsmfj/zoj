#include<stdio.h>
float f(int n)
{
  int i;
  float b=0;
  for(i=1;i<=n;i++)
    b=b+1/(float)(i+1);
  return b;
}
main()
{
  float a;
  int i;
  while(scanf("%f",&a)){
    if(a>0.00&&a<=5.20){
      for(i=1;f(i)<a;i++) ;
      printf("%d card(s)\n",i);}
    else break;}
  }