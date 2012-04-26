#include<stdio.h>
main()
{
  int a[100],i,d,m,t;
  for(i=0;i<100;i++)
    a[i]=0;
  while(scanf("%d",&m)&&m>0&&m<100){
    a[m]++;
    d=0;
    t=0;
    for(i=1;i<=15;i++){
      scanf("%d",&m);
      a[m]++;
      if(a[m]>=2) {d=1;break;}
      if(m==0) break; }
    if(d) break;
    for(i=1;i<50;i++)
      if(a[i]&&a[2*i]) t++;
    printf("%d\n",t);
    for(i=0;i<100;i++)
       a[i]=0;
  }
}