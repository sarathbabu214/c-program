#include<stdio.h>
void main()
{
    int a,n;
    printf("\nenter value");
    scanf("%d",&n);
    while(n)
    {
        a=n%10;
        n=n/10;
        printf("%d",a);
    }
}
