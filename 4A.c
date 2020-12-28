#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<=2)
        printf("No");
    else
    {
        if(a%2==0)
            printf("Yes");
        else
            printf("No");
    }
    return 0;
}
