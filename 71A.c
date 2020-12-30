#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    int i,j,k,m,n;
    scanf("%d",&m);
    for(n=0;n<=m;n++)
    {
        gets(c);
        k=strlen(c);
        if(k<=10)
        {
           puts(c);
           printf("\n");
        }

        else
        {
            printf("%c",c[0]);
            printf("%d",k-2);
            printf("%c",c[k-1]);
            printf("\n");
        }
    }
    return 0;
}
