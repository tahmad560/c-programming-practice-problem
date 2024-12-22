#include<stdio.h>
int main()
{
    int input;
    scanf("%d",&input);
    if(input>2 && input<=100 && input%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    } 
}