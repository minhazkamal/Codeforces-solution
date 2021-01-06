#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,h3,m3,i,j,k,l,m;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    i=(h1*60)+m1;
    j=(h2*60)+m2;
    k=(i+j)/2;
    h3=k/60;
    m3=k-(h3*60);
    if(h3<10&&m3<10)
        printf("0%d:0%d",h3,m3);
    else if(h3<10&&m3>=10)
        printf("0%d:%d",h3,m3);
    else if(h3>=10&&m3<10)
        printf("%d:0%d",h3,m3);
    else
        printf("%d:%d",h3,m3);
    return 0;
}
