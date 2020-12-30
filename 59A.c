#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char c[100];
    int a=0,b=0,d,e,f,g,h,i;
    gets(c);
    for(i=0;i<strlen(c);i++)
    {
        a=a+isupper(c[i]);
        b=b+islower(c[i]);
    }
    b=b/2;
    if(a>b)
    {
        for(i=0;i<strlen(c);i++)
        {
            c[i]=toupper(c[i]);
        }
    }
    else
    {
        for(i=0;i<strlen(c);i++)
        {
            c[i]=tolower(c[i]);
        }
    }
    puts(c);
    return 0;
}
