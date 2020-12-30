#include<stdio.h>
int main()
{
    int a,b,c,n,d=0,e=0,g=0,f;
    scanf("%d",&n);
    for(f=1;f<=n;f++)
    {
        scanf("%d %d %d",&a,&b,&c);
        d=d+a;
        e=e+b;
        g=g+c;
    }
    if(d==0&&e==0&&g==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
