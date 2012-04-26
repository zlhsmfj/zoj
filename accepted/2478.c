#include<stdio.h>
main()
{
 char a[100];
 int i,j,n,k;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%s",a);
   for(j=0;a[j]!='\0';j++)
    if(a[j]<'A'||a[j]>'Z')
     return 0;
   k=0;
   for(j=0;a[j]!='\0';j++)
   {
      if(a[j+1]==a[j]) k++;
      else{
	if(k==0)
	 printf("%c",a[j]);
	else
	 printf("%d%c",k+1,a[j]);
	k=0;
      }
   }
   printf("\n");
  }
}