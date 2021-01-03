#include<stdio.h>
#include<string.h>
int main()
{
    char c[50],temp;
    int i,j,k,l,m,n;
    gets(c);
    l=strlen(c);
    if(l%2==0)
        j=l/2-1;
    else
        j=l/2;
    m=j*2;
    for(i=0;i<j;i++)
    {
        temp=c[0];
        for(k=1;k<=m;k++)
        {
            c[k-1]=c[k];
        }
        c[m]=temp;
        //puts(c);
        //printf("%c",temp);
        m=m-2;
    }
    puts(c);
    return 0;
}
