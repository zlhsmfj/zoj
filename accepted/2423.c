#include<stdio.h>
#include<math.h>

int f(int i,long n)
{
    if(i>=n/3&&i<2*n/3)
       return 1;
    return 0;
}

int Q(int i,int j,long n)
{
   while(n>1)
     if(f(i,n)==f(j,n))
     {
        if(i>=2*n/3)
          i-=2*n/3;
        else if(i>=n/3)
          i-=n/3;
        if(j>=2*n/3)
          j-=2*n/3;
        else if(j>=n/3)
          j-=n/3;
        n/=3;
     }
     else return 0;
   return 1;
}

main()
{
    int i,j,k,flag;
    long n;
    while(scanf("%ld",&n)!=EOF&&n>0)
    {
        n=pow(3,n-1);
        for(i=0;i<n;i++)
        {
           flag=1;
           for(j=0,k=0;j<n-k;j++)
              if(Q(i,j,n))
              {
                if(flag)
                {
                  k=j;
                  flag=0;
                }
                putchar('X');
              }
              else printf(" ");
           putchar('\n');
        }
        printf("-\n");
   }
}

