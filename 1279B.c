#include<stdio.h>

int skip(int n, long long int g)
{
    int a,i,ar[n],t=0,s=0,p=0,q=0,l,j,k;
    a=n/2, l=n-a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
}

int main()
{
    int n,t,i;
    long long int g;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %i64d",&n,&g);
        printf("%d\n",skip(n,g));
    }
    return 0;
}
