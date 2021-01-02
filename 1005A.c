#include<stdio.h>
int main()
{
    int a[1001],b[1000],i,j,k=0,l,m,n,o,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    a[n]=0;
    for(i=0;i<=n;i++)
    {
        if(a[i]>=a[i+1])
        {
            b[k]=a[i];
            k++;
        }
    }
    printf("%d\n",k);
    for(j=0;j<k;j++)
        printf("%d ",b[j]);
}
