#include<stdio.h>
int main()
{
    long long int a,b,c=0,d,e;
    scanf("%I64d",&a);
    for(d=a;d>0;d=d/10)
    {
        b=d%10;
        if(b==7||b==4)
            c=c+1;
    }
    if(c==4||c==7)
        printf("YES");
    else
        printf("NO");
    return 0;
}
