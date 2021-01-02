#include<stdio.h>
int main()
{
    long long int n,a,b,s;
    scanf("%I64d %I64d %I64d %I64d",&n,&a,&b,&s);
    n=n-1;
    if((n*a)+b>s||(n*b)+a<s)
        printf("NO");
    else
        printf("YES");
    return 0;
}
