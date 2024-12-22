#include<stdio.h>
int main()
{
    int age;
    printf("Enter you age ");
    scanf("%d",&age);

    if(age < 12)
    {
        printf("You are a child");
    }
    else if(age>=13 && age<=19)
    {
        printf("You are a teenager");
    }
    else
    {
        printf("You are an adult");
    }
}