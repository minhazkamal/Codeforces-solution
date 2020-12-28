#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    int a,b,d,e,f,g,h,i,j,k,l,m,x=0;
    gets(c);
    for(i=0;i<strlen(c);i++) if(c[i]=='h') {x++;a=i; break;}
    for(j=a+1;j<strlen(c);j++) if(c[j]=='e') {x++;b=j; break;}
    for(k=b+1;k<strlen(c);k++) if(c[k]=='l') {x++;d=k; break;}
    for(l=d+1;l<strlen(c);l++) if(c[l]=='l') {x++;e=l; break;}
    for(m=e+1;m<strlen(c);m++) if(c[m]=='o') {x++;f=m; break;}
        if(x==5)
        printf("YES");
    else
        printf("NO");
    return 0;
}
