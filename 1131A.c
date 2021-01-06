#include<stdio.h>
int main()
{
    long long int w1,h1,w2,h2,a,b,c,d,e,f,g;
    scanf("%I64d %I64d %I64d %I64d",&w1,&h1,&w2,&h2);
    a=(w1+2)*(h1+1);
    b=a-(w1*h1);
    c=(w2+2)*(h2+1);
    d=c-(w2*h2);
    e=w1-w2;
    //printf("%I64d %I64d %I64d %I64d %I64d\n",a,b,c,d,e);
    printf("%I64d",b+d+e);
    return 0;
}
