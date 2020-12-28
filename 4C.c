#include<stdio.h>
#include<string.h>
int main()
{
    char c[10000][40],d[10000][40];
    int a[10000]={};
    int i,j,k,l,m=0,n,o,p;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        gets(c[i]);
    }
    for(i=0;i<n-1;i++)
    {
        m=0;
        for(j=0;j<i;j++)
        {
            k=strcmp(c[i],c[j]);
            if(k==0)
                printf("%s%d\n",c[j],++m);
        }
        printf("OK\n");
    }

    return 0;
}
