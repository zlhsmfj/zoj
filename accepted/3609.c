/*
 * Modular Inverse
 */

#include<stdio.h>

int main()
{
    int T, a, m;
    int i;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d%d", &a, &m);
        if(m == 1)
        {
            printf("1\n"); /* why? */
            continue;
        }
        for(i = 1; i < m; i++)
            if ((a * i) % m == 1)
                break;
        if(i != m)
            printf("%d\n", i);
        else
            printf("Not Exist\n");
    }
    return 0;
}
