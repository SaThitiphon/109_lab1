#include <stdio.h>
int main()
{
    int N,i,Max,d;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    Max = a[0];
    for(i=1;i<N;i++)
    {
        if(Max<a[i])
        {
            Max = a[i];
            d = i+1;
        }
    }
    printf("%d %d",d,Max);
}

