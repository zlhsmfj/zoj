#include<stdio.h>
#include<string.h>
main()
{
  char a[11],c,b[202];
  while(scanf("%s",a)&&strcmp(a,"START")==0)
  {
    c=getchar();
    while((c=getchar())!='\n')
    {
     if(c<='Z'&&c>='A')
     {
       c-=5;
       if(c<'A') c+=26;
     }
     putchar(c);
     }
     putchar(c);
     scanf("%s",a);
  }
}
