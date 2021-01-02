#include<stdio.h>
int main(void)
{
    int a,b,c,d=0;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&c);
        if(c==1)
            d=d+1;
        else
            d=d+0;
    }
    if(d==0)
        printf("EASY");
    else
        printf("HARD");

}
