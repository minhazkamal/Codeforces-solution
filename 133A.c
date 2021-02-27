#include<stdio.h>
int main()
{
    char p[100];int b;
    gets(p);
    for(int i=0;i<strlen(p);i++)
    {
        if(p[i]>=33&&p[i]<=126)
        {
            if(p[i]=='H'||p[i]=='Q'||p[i]=='9'||p[i]=="++")
            {
                b=0;
                break;
            }
            else
                b=1;

        }

    }
    if(b==0) printf("YES");
    else printf("NO");

    return 0;
}
