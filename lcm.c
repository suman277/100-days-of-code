#include<stdio.h>
int main()
{
    int x,y, max;
    printf("Enter the Value of The first number");
    scanf("%d", &x);
    printf("Enter the value of the second number");
    scanf("%d", &y);
    max=(x>y) ? x:y;
    while(1){
        if(max % x==0 && max % y==0){
            printf("The LCM is %d", max);
            break;
        }
        ++max;
    }
}