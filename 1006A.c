#include<stdio.h>
int main()
{
    long long int n,a[1000]={},i,j,k,l;
    scanf("%I64d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
        if(a[i]%2==0)
            a[i]=a[i]-1;
        printf("%I64d ",a[i]);
    }
    return 0;
}
