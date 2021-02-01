#include<stdio.h>

int main()
{
    int a,c=1,r;
    int b[]={4 ,7 ,44 ,47 ,74 ,77 ,444 ,447 ,474 ,477 ,744 ,747 ,777 ,774 };
    scanf("%d",&a);
    if(a==4||a==7||a==44||a==47||a==74||a==77||a==444||a==447||a==474||a==477||a==744||a==747||a==777)
        printf("YES");
    else
    {
    for(int i=0;i<14;i++)
    {
        r=a%b[i];
        //printf("%d\n",r);
        if(r==0)
        {
            printf("YES");
            break;
        }
        else
            c=0;
    }
        if(c==0&&r!=0)
            printf("NO");

    }
    return 0;
}


