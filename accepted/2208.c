#include<stdio.h>
main()
{
  char b[201];
  int i,n,j,k;
  while(scanf("%d",&n)&&n>0)
  {
    for(i=0;i<201;i++)
    {
      scanf("%c",&b[i]);

      if(i&&(b[i]<'a'||b[i]>'z'))
	break;
    }
    for(j=0;j<n;j++)
      for(k=0;;k=k+2)
      {
	if(k*n-j>0&&k*n-j<i)
	   printf("%c",b[k*n-j]);
	if(k*n+1+j<i)
	   printf("%c",b[k*n+1+j]);
	if(k*n-j>i||k*n+j+1>i)
	   break;

      }
  printf("\n");
  }
}