#include<stdio.h>
#include<string.h>

main()
{
  int i,n,j=0;
  char a[15][26];
  while(scanf("%d",&n)&&n>0&&n<=15)
  {
   j++;
   for(i=0;i<n;i++)
   {
     scanf("%s",a[i]);
     if(strlen(a[i])>25) return 0;
  }
   printf("SET %d\n",j);
   for(i=0;i*2<n;i++)
     printf("%s\n",a[i*2]);
   if(n%2==1)  n--;
   for(n--;n>=0;n=n-2)
     printf("%s\n",a[n]);
  }
}