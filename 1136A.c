#include<stdio.h>
int main()
{
    int l[100]={},r[100]={},i,j=0,k,m,n,o,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&l[i],&r[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k>=l[i]&&k<=r[i])
        {
            j=i;
            break;
        }
    }
    printf("%d",n-j);
    return 0;
}
