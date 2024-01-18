#include<stdio.h>
int main()
{
    int count=0, n, i;
    printf("Enter the number");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("This is a prime number");
    }
    else
    {
        printf("This is not a prime number");
    }
}