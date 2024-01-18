#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the second value");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a is %d", a);
    printf("The value of b is %d", b);
    return 0;
}