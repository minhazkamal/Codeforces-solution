#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%I64d %I64d %I64d %I64d",&a,&b,&c,&d);
    printf("%d",a==d&&(a>0||c==0));
    return 0;
}
