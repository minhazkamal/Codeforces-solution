#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j,k,l;
    gets(a);
    gets(b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>=65&&a[i]<=90)
            a[i]=a[i]+32;
        if(b[i]>=65&&b[i]<=90)
            b[i]=b[i]+32;
    }
    j=strcmp(a,b);
    printf("%d", j);
    return 0;
}
