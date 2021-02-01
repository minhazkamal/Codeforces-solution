#include<stdio.h>
int main(void)
{
    int n,a,b,x,y,i,j,k=0;
    scanf("%d %d %d %d %d",&n,&a,&x,&b,&y);
    for(i=a,j=b;i!=x&&j!=y;)
    {
        if(i<n)
            i++;
        else
            i=1;
        if(j>1)
            j--;
        else
            j=n;
        if(i==j)
        {
            k=1;
            break;
        }
        //printf("i=%d j=%d\n",i,j);
    }
    if(k==0)
        printf("no");
    else
        printf("yes");
}
