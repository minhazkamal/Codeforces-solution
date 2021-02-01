#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[2*n];
    int i,j,k,l,t,m,q,o=0,p,temp;
    for(i=0;i<(2*n);i++) {scanf("%d",&a[i]);}
    for(j=0,k=n;j<n&&k<(2*n);j++,k++)
    {
        if(a[k]==a[j]) o++;
    }
    //printf("%d",o);
    if(o==n) printf("-1");
    else
    {
        for(j=0;j<(2*n);j++)
        {
            for(k=j+1;k<(2*n);k++)
            {
                if(a[j]<a[k])
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        for(l=(2*n)-1;l>=0;l--) printf("%d ",a[l]);
    }

    return 0;
}
