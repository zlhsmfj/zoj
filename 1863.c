#include<stdio.h>
int Max(int p,int q)
{
    if(p>q) return p;
    return q;
}

int Min(int p,int q)
{
    if(p<q) return p;
    return q;
}

main()
{
   int p,q,r,s,i,j;
   double re;
   while(scanf("%d%d%d%d",&p,&q,&r,&s)!=EOF)
   {
      if(p-q<q) q=p-q;
      if(r-s<s) s=r-s;
      re=1;
      for(i=q+1,j=1;;i++,j++)
      {
        if(j<=p-q) re/=j;
        if(i<=p) re*=i;
        if(j>p-q&&i>p) break;
      }
      for(i=s+1,j=1;;i++,j++)
      {
        if(j<=r-s) re*=j;
        if(i<=r) re/=i;
        if(i>r&&j>r-s) break;
      }
      printf("%.5lf\n",re);
   }
}
         
