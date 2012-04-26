#include<stdio.h>
main()
{
	int i;
	int a,t,j;
	scanf("%d",&a);
	if(a>0&&a<=600000)
		printf("PERFECTION OUTPUT\n");
	for(i=1;i<=99;i++)
	{
		if(a==0)
		{
			printf("END OF OUTPUT\n");
			break;
		}
  		else if(a==1)	printf("%5d  DEFICIENT\n",a);
  		else {
    		t=1;
    		for(j=2;j<=a/2;j++)
      			if(a%j==0)
					t=t+j;
			printf("%5d  ",a);

			if(t==a) printf("PERFECT\n");
    		else if(t<a) printf("DEFICIENT\n");
			else printf("ABUNDANT\n"); }
		scanf("%d",&a);
	}
}
