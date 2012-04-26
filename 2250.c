#include<stdio.h>
#include<string.h>
main()
{
    int a[10001];
    int max;
    int i,j;
    int n,m,p;
    while(scanf("%d%d",&n,&m)&&(n||m))
    {
        for(i=1;i<=10001;i++)
          a[i]=0;
        max=0;
        for(i=0;i<n;i++)
           for(j=0;j<m;j++)
           {
              scanf("%d",&p);
              a[p]++;
              if(a[p]>max) max=a[p];
           }
        j=0;
        while(--max)
        {
          for(i=1;i<=10000;i++)
            if(a[i]==max) {
               j=1;
               printf("%d ",i);}
          if(j)
          {
            printf("\n");
            break;
          }
       }
    }
}
