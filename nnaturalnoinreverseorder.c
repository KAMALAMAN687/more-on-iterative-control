#include<stdio.h>
int main()
{
    printf("enter a number:");
    int a,b;
    scanf("%d",&a);
    for(b=1;b<=a;a--)
    {
        printf("%d",a);
    }
    return 0;

}