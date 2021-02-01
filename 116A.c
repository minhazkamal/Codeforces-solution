#include<stdio.h>
int main()
{
    int a,d,b,c,e,f=0,g=-1;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {

        scanf("%d %d",&c,&e);
        f=f-c;
        f=f+e;

        if(g<f)
            g=f;
    }
    printf("%d",g);
}
