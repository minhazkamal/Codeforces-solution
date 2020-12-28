#include<stdio.h>
#include<string.h>
int main(void)
{
    char c[105],d[105];
    int e=0,i,j;
    gets(c);
    gets(d);
    int l=strlen(c);
    for(i=0,j=l-1;i<strlen(c);i++,j--)
    {
        if(c[i]==d[j])
        {
            e=e+1;
        }
    }
    if(e==l)
        printf("YES");
    else
        printf("NO");
}
