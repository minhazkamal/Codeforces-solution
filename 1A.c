#include<stdio.h>
int main()
{
    long long int n,m,a,i,j,k,l;
    scanf("%I64d %I64d %I64d",&n,&m,&a);
    i=n%a;
    j=n/a;
    if(i==0)
        j=j+0;
    else
        j=j+1;
    k=m%a;
    l=m/a;
    if(k==0)
        l=l+0;
    else
        l=l+1;
    printf("%I64d",l*j);
    return 0;
}
