#include<stdio.h>
main()
{
    int a,b,n;
    int i,j,temp;
    
    while(scanf("%d%d%d",&a,&b,&n)!=EOF)
    for(j=1;;j++)
    if((b*j+n)%a==0)
    {
        i=(b*j+n)/a;
        temp=0;
        while(i--)
        {
            temp+=a;
            printf("fill A\npour A B\n");
            if(temp>b&&i>0)
            {
                printf("empty B\npour A B\n");
            	temp-=b;
			}
        }
        if(n<a) printf("empty B\npour A B\n");
        printf("success\n");
        break;
    }
    else if((b*j-n)%a==0)
    {
        i=(b*j-n)/a;
        temp=0;
        while(i--)
        {
        	printf("fill B\n");
            printf("pour B A\n");
            if(i!=0)
            	printf("empty A\npour B A\n");
         }
        printf("success\n");
        break;
    }
}
