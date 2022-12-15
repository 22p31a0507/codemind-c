#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c,area;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)*0.5;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",area);
    
}