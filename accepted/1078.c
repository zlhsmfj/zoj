#include "stdio.h"
main()
{
  long n,m;
  int i,j,k,l,a[20],b[16];
  while(scanf("%ld",&n)!=EOF&&n>0&&n<=50000)
  {
  	l=0;
    for(i=2;i<=16;i++)
    {  
      m=n;
      for(j=1;m;j++)
      { 
      	 a[j]=m%i;
         m/=i;
      }
      for(k=1;k<=j/2;k++)
       if(a[k]!=a[j-k])  break;
      if(k>j/2) {b[l]=i;l++;}    
    } 
    if(l==0) printf("Number %ld is not a palindrom\n",n);
    else{
      printf("Number %ld is palindrom in basis ",n);
      for(i=0;i<l-1;i++)
        printf("%d ",b[i]);
      printf("%d\n",b[l-1]);
    }
  }  
}

