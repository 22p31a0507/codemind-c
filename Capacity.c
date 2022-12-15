#include<stdio.h>
int main()
{
    int s,t,b,c,k;
    scanf("%d%d%d",&s,&t,&b);
    c=2*t*s*b*512;
    k=c/1024;
    printf("%d KB",k);
}