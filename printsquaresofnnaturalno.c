#include<stdio.h>
int main()
{
    printf("enter a number:");
    int a,b;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        printf("\n%d",b*b);
    }
    return 0;

}