#include<stdio.h>
int main()
{
    int d[100000],n,t1=0,t2=0,m=0,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&d[i]);
    for(i=0;i<n;)
    {
        t1=0;
        for(;i<n;)
        {
            if(d[i]==1) {t1++; i++;}
            else break;
        }
        if(t1>t2) j=t2;
        else j=t1;
        if(j>m)
        m=j;
        t2=0;
        for(;i<n;)
        {
            if(d[i]==2) {t2++; i++;}
            else break;
        }
        if(t1>t2) j=t2;
        else j=t1;
        if(j>m)
        m=j;
    }
    printf("%d",2*m);
    return 0;
}
