#include<stdio.h>
#include<string.h>
int main()
{
    char c[55],x[10];
    int i,j,k=0,l,m,n,o;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&c[i]);
    }
    for(j=0;j<n;j++)
    {
        x[k]=c[j+k];
        j=j+k;
        k++;
    }
    for(l=0;l<k;l++)
        printf("%c",x[l]);

    return 0;
}
