#include<stdio.h>
main()
{
  long n;
  int d,i,j,a[24];
  scanf("%d",&d);
  if(d>0&&d<=10)
     for(i=0;i<d;i++){
       scanf("%ld",&n);
       if(n>0&&n<=1000000){
	 j=0;
	 while(n){
	   a[j]=n%2;
	   n=n/2;
	   if(a[j]&&n)  printf("%d ",j);
	   else if(a[j])printf("%d\n",j);
	   j=j+1;
	 }
       }
       else break;
     }
}