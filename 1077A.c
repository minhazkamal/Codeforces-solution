#include<stdio.h>
int main()
{
    long long int a,b,k,t,i,j,l,m,n,o;
    scanf("%I64d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%I64d %I64d %I64d",&a,&b,&k);
        m=0;
        {
            if(k%2==0)
                m=((a-b)*(k/2));
            else
                m=((a*((k/2)+1))-(b*(k/2)));
            printf("%I64d\n",m);
        }

    }
    return 0;
}
