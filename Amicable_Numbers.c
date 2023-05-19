#include<stdio.h>
int main()
{
    int a,b,asum=0,bsum=0,i,max;
    scanf("%d
%d",&a,&b);
    max=(a>b)?a:b;
    for(i=1;i<max;i++)
    {
        if(a%i==0) asum+=i;
        if(b%i==0) bsum+=i;
    }
    if(max==a) bsum-=b;
    else asum-=b;
    if(asum==bsum) printf("Amicable");
    else printf("Not Amicable");
    
    return 0;
}