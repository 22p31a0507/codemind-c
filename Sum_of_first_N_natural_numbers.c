#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i*(i+1)*0.5;
    }
    printf("%d",a);
}