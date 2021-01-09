#include<stdio.h>
int main()
{
    long long int n,m,i,j=0,k,l;
    scanf("%I64d %I64d",&n,&m);
    if(m%n!=0)
       printf("-1");
    else
    {
        i=m/n;
        while(i>1&&(i%3==0||i%2==0))
        {
            j++;
            if(i%2==0)
                i=i/2;
            else if(i%3==0)
                i=i/3;
        }
        if(i<=1)
        printf("%d",j);
        else
            printf("-1");
    }
    return 0;
}
