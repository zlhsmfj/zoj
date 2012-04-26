/*
 * Yet Another Story of Rock-paper-scissors
 */

#include<stdio.h>

int main()
{
    int T;
    char b[50], g[50], x[20];
    
    while(scanf("%d", &T)!=EOF)
    {
        while(T--)
        {
            scanf("%s%s%s", b, g, x);
            printf("%s will survive\n", g);
        }
    }
    return 0;
}
