#include<stdio.h>
int main()
{
    signed int a,b,c,i,j=0,k,d;
    scanf("%d",&a);
    if(a%2==0)
        c=a/2;
    else
        c=(a/2)+1;
    for(i=0;i<a;i++)
    {
        scanf("%d",d);
        if(d<=0)
            j++;
    }
    k=a-j;
    printf("%d %d %d",k,a,j);
    /*if(k>=c)
        printf("%d",k);
    else
        printf("0");*/
    return 0;

}
