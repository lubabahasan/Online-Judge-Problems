#include <stdio.h>
#include <stdlib.h>
int comparator(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, s, i, k, j, l, v, g = 0, w;
        scanf("%d %d", &n, &s);
        int a[n];
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), comparator);
        for(i = 0; i < n-1; i++)
        {
            j = a[i+1]-a[i];
            //printf("%d\n", j);
            if(j >= 2)
            {
                k = j-1;
                while(k--)
                {
                    l = a[i] + 1;
                }
            }
        }
        w = (a[0]-1)+l;
        //printf("%d\n", w);
        if(w < s || w == s)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}