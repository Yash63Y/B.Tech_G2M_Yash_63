#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    int c=a>b;
    printf("%d\n",c);

    int d=a<b;
    printf("%d\n",d);

    int e=a==b;
    printf("%d\n",e);

    int f=a>=b;
    printf("%d\n",f);

    int g=a<=b;
    printf("%d\n",g);

    int h=a==b;
    printf("%d\n",h);

    return 0;
}