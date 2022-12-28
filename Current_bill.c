#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float uc,b,tb;
    if(a<=199)
    {
        uc=1.20;
    }
    else if(a>=200&&a<400)
    {
        uc=1.50;
    }
    else if(a>400&&a<600)
    {
        uc=1.80;
    }
    else
    {
        uc=2.00;
    }
    b=a*uc;
    if(b>400)
    {
        tb=b+b*0.15;
    }
    else
    {
        tb=b+100;
    }
    printf("%0.2f",tb);
}