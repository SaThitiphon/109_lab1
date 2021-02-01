#include <stdio.h>
int main()
{
    long N,i,Max,d,j;
    scanf("%ld",&N);
    long a[N];
    for(i=0;i<N;i++)
    {
        scanf("%ld",&a[i]);
    }
    Max = a[0];
    d = 1;
    for(j=1;j<N;j++)
    {
        if(Max<a[j])
        {
            Max = a[j];
            d = j+1;
        }
    }
    printf("%ld %ld",d,Max);
    return 0;
}
