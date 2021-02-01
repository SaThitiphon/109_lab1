#include <stdio.h>
int main()
{
    float time;
    char n;
    int h,m;
    scanf("%f",&time);
     if((time>=0&&time<=11.59)||time>=24)
        n = 'a';
    else if(time>=12&&time<=23.59)
        n = 'p';
    else if(time==24.00)
    h = (int)time;
    time = time * 100;
    m = (int)time % 100;
    if(h>12&&h<24)
    {
        h = h - 12;
    }
    else if(h==24)
        h = h - 24;
    if(m==0)
        printf("%d:%d0 %c.m.",h,m,n);
    else if(h==0)
        printf("0%d:%d %c.m.",h,m,n);
    else
        printf("%d:%d %c.m.",h,m,n);
}
