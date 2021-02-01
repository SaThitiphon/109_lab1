#include <stdio.h>
int main()
{
    float time;
    char n;
    int h,m;
    scanf("%f",&time);
    h = (int)time;
    time = time * 100;
    m = (int)time % 100;
    if(h>=0&&h<12||h==24)
        n = 'a';
    else if(h>=12&&h<24)
        n = 'p';
    if(h==24)
    {
        h = 0;
    }
    else if(h>12&&h<24)
    {
        h = h - 12;
    }
    if(h==0)
        printf("0%d:%d %c.m.",h,m,n);
    else if(m==0)
        printf("%d:%d0 %c.m.",h,m,n);
    else if(h==0&&m==0)
        printf("0%d:%d0 %c.m.",h,m,n);
    else
        printf("%d:%d %c.m.",h,m,n);
    return 0;
}
