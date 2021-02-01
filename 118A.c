#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char c[100];
    gets(c);
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'||c[i]=='Y'||c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='y')
            {
                c[i]=='\0';
                continue;
            }

        if(isupper(c[i])!=0)
            c[i]=c[i]+32;

        for(int k=0;k<=strlen(c)-1;k++)
        {
            printf(".");
            break;
        }
        printf("%c",c[i]);

    }

    return 0;
}
