#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);
    for(b=1;b<=a;a--)
    {
        printf("%d",2*a);
    }
}