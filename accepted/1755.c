#include<stdio.h>
main()
{
  int n,v,i,r=0,s=0,t=0,max=0,min=0,k,j;
  char b[9][9];
  while(scanf("%d",&n)&&n>=2&&n<=9)
  {
    scanf("%d%d%d%s",&r,&s,&t,b[0]);
    min=r*s*t;
    max=min;
    j=k=0;
    for(i=1;i<n;i++)
    {
     scanf("%d%d%d%s",&r,&s,&t,b[i]);
     v=r*s*t;
     if(max<v) {max=v;j=i;}
     if(min>v) {min=v;k=i;}
    }
    printf("%s took clay from %s.\n",b[j],b[k]);
  }
}