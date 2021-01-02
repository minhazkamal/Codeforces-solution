#include<stdio.h>
int main()
{
    long int n,d,r,i,j,k,t,ds,rs;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        ds=0;rs=0;
        scanf("%ld %ld %ld",&n,&d,&r);
        ds=ds+1;rs=rs+1;
        for(j=1;j<=n;j++)
        {
            if(ds+d<=n)
            ds=ds+d;
            if(rs+r<=n)
            rs=rs+r;
            if(ds==rs||(ds+d>n&&rs+r>n))
                break;
        }
        if(ds==n&&rs==n)
            printf("%ld\n",j-1);
        else if(ds==rs)
            printf("%ld\n",j);
        else
            printf("%ld\n",j-1);
    }
    return 0;
}
