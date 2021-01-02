#include<stdio.h>
int main()
{
    int d[101]={},n,i,j,k,l,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        d[j]++;
    }
    for(i=1;i<101;i++)
    {
        if(d[i]>max)
            max=d[i];
    }
    printf("%d",max);
    return 0;

}
