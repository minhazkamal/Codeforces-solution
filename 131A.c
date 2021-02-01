#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    int a,b,d=0,e;
    gets(c);
    for(int i=1;i<strlen(c);i++)
    {
        if(c[i]>=97&&c[i]<=122)
        {
            d=d+1;
            break;
        }
    }
    if(d==0)
    {
    if(c[0]>=65&&c[0]<=90)
        {
            for(e=0;e<strlen(c);e++)
            {
                c[e]=c[e]+32;
            }
        }
    else
        {
            c[0]=c[0]-32;
            for(int k=1;k<strlen(c);k++)
            {
                c[k]=c[k]+32;
            }
        }
    }
    puts(c);
    return 0;
}
