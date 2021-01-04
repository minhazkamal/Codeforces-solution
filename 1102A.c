#include<stdio.h>
int main()
{
    long long int n;
    scanf("%I64d",&n);
    n=(n*(n+1))/2;
    printf("%d", n%2);
    return 0;
}
