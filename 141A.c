#include<stdio.h>
#include<string.h>
int main()
{
    char a[105],b[105],c[105];
    int d[27]={},i,j,k[27]={},l,f=0;
    gets(a);
    gets(b);
    gets(c);
    for(i=0;i<strlen(a);i++)
    {
        j=a[i]-65;
        d[j]=d[j]+1;
        //printf("%d\n",d[j]);
    }
    for(i=0;i<strlen(b);i++)
    {
        j=b[i]-65;
        d[j]=d[j]+1;
        //printf("%d\n",d[j]);
    }
    for(i=0;i<strlen(c);i++)
    {
        l=c[i]-65;
        k[l]=k[l]+1;
        //printf("%d %d",d[0],d[1]);
    }
    for(i=0;i<26;i++)
    {
        //printf("%d %d\n",d[i],k[i]);
        if(d[i]!=k[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
        printf("NO");
    else
        printf("YES");
    return 0;
}
