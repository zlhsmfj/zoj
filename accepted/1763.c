#include<stdio.h>
main()
{
  float a,b,c;
  scanf("%f",&a);
  if(a>=-10&&a<=200){
    while(scanf("%f",&b)&&b>=-10&&b<=200){
       printf("%.2f\n",b-a);
       a=b;
    }
    if(b==999) printf("End of Output\n");
  }
  else if(a==999) printf("End of Output\n");
}