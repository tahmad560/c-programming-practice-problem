#include<stdio.h>
int main()
{
    int input;
    printf("Enter the number : ");
    scanf("%d",&input);
    if(input<0)
    {
        printf("Negetive");
    }
    else if(input>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Zero");
    }
}