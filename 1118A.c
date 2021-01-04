#include<stdio.h>

long long int func(long long int n,long long int a,long long int b)
{
    long long int j,k;
    if(n%2==0)
    {
        j=(n/2)*b;
        k=n*a;
        if(j>k)
            return k;
        else
            return j;
    }
    else
    {
        j=((n/2)*b)+a;
        k=n*a;
        if(j>k)
            return k;
        else
            return j;
    }

}
int main()
{
    long long int n,a,b;
    long long int taka;
    int q,i;
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
        scanf("%I64d %I64d %I64d",&n,&a,&b);
        taka=func(n,a,b);
        printf("%I64d\n",taka);
    }
    return 0;
}
