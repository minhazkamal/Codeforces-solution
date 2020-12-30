#include<stdio.h>
#include<string.h>
int main()
{
    char a[105],b[105],c[105];
    gets(a);
    gets(b);
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==b[i])
            c[i]=48;
        else
            c[i]=49;
        if(i==strlen(a)-1)
            c[i+1]=0;
    }
    puts(c);
    return 0;
}
