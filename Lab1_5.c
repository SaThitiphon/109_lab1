#include <stdio.h>
int main()
{
    int N,i,Max,d,j;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    Max = a[0];
    for(j=1;j<N;j++)
    {
        if(Max<a[j])
        {
            Max = a[j];
            d = j+1;
        }
    }
    printf("%d %d",d,Max);
    return 0;
}
