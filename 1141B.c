#include<stdio.h>
#include<string.h>
int main()
{
    int h[200001],i,j=0,k,l=0,m=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&h[i]);
        if(h[i]==1)
            j++;
        else
        {
            if(j>m)
                m=j;
            j=0;
        }
    }
    if(h[n-1]==1)
    {
        for(i=0;h[i]==1;i++)
            l++;
        j=j+l;
    }
    if(j>m)
    printf("%d",j);
    else
    printf("%d",m);
    return 0;
}
