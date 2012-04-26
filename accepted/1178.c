#include<stdio.h>
#define f(a,b) ((a)>(b))?(printf("Blank")):(printf("%d",a))


main()
{
  int n,t,i;

  while(scanf("%d",&n)&&n>0&&n<=100){

    printf("Printing order for %d pages:\n",n);
    if(n>=2){
      if(n%4)
	t=n-n%4+4;
      else
	t=n;
      for(i=1;i<=t/4;i++){
	 printf("Sheet %d, front: ",i);
	 f(t+2-2*i,n);
	 printf(", ");
	 f(2*i-1,n);
	 printf("\n");
	 printf("Sheet %d, back : ",i);
	 f(2*i,n);
	 printf(", ");
	 f(t+1-2*i,n);
	 printf("\n");
     }
    }
    else if(n==1) printf("Sheet 1, front: Blank, 1\n");
  }
}
