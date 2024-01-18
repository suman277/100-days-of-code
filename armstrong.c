#include<stdio.h>
int main()
{
    int rem, reversed=0,n, temp;
    printf("Enter the number");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        reversed=reversed +(rem*rem*rem);
        n/=10;

    }
    if(reversed==temp)
    {
        printf("This is an palindrome number");
    }
    else{
        printf("This is not an palindrome number");
    }
}