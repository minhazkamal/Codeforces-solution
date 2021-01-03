#include<stdio.h>
#include<string.h>
int main()
{
    char c[100],d[100];
    int a,b=0;
    scanf("%s",c);
    for(a=1;a<=5;a++)
    {
        scanf("%s",d);
        if(c[0]==d[0]||c[1]==d[1])
        {
            b=1;
            break;
        }
    }
    if(b==1) printf("YES");
    else printf("NO");
    return 0;
}
