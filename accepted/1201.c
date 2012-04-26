#include<stdio.h>
main()
{
 int a[50],b[50],i,j,k,N,m;
 char c;
 while((scanf("%d",&N))!=EOF&&(N>=1)&&(N<=50))
 {
   c=getchar();
   for(j=0;j<N;j++)
     scanf("%d",&a[j]);
   for(j=0;j<N;j++)
     b[j]=0;
   if(c=='I'){
    for(m=0,j=0;j<N;j++)
     for(k=0;k<N;k++){
     if(b[k]==0) m++;
     if(m>a[j]){ b[k]=j+1;m=0;break;}
     }
     for(j=0;j<N;j++){
      printf("%d",b[j]);
     if(j==N-1) printf("\n");
     else printf(" ");}}
   else if(c=='P'){
    for(m=0,j=0;j<N;j++){
     for(k=0;k<j;k++)
      if(a[k]>a[j]) m++;
     b[a[j]-1]=m;
     m=0;}
   for(j=0;j<N;j++){
     printf("%d",b[j]);
     if(j==N-1) printf("\n");
     else printf(" ");}}
  }
}