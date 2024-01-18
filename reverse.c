#include<stdio.h>
int main()
{
    int n, reversednumber=0, reminder;
    printf("Enter the number");
    scanf("%d", &n);
    while(n!=0)
    {
        reminder=n%10;
        reversednumber=reversednumber*10 +reminder;
        n/=10;
    }
    printf("The reversed number is %d", reversednumber);
    return 0;
}