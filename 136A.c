#include<stdio.h>
int main()
{
    int p[101]={},r[101]={},i,j,k,l,m,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
        j=p[i];
        r[j]=i;
    }
    for(i=1;i<=n;i++)
        printf("%d ",r[i]);
    return 0;
}
