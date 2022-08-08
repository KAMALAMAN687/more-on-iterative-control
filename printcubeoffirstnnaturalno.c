#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a no. : ");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        printf("\n%d",b*b*b);
    }
    return 0;
}