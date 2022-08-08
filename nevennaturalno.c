#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a nummber: ");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        printf("%d",2*b);
    }
    return 0;
}