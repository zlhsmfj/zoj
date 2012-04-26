#include<stdio.h>
#include<string.h>
main()
{
  int N,i,j,b[1000],k;
  char a[1000][15];
  while(scanf("%d",&N)&&N>0&&N<1000){
    for(i=0;i<N;i++)
      scanf("%s",a[i]);
    for(i=0;i<N;i++)
      b[i]=0;
    for(i=0;i<N-1;i++)
     for(j=i+1;j<N;j++)
      if(!(strcmp(a[i],a[j]))){
	a[j][0]=j;
	b[i]++; }
    j=b[0];k=0;
    for(i=1;i<N;i++)
      if(b[i]>j) {j=b[i];k=i;}
    printf("%s",a[k]);
    printf("\n");

  }
}
