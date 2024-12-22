#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int input;
    scanf("%s",string);
    input= strlen(string);
    if(input>11)
    {
        printf("%c%d%c",string[0],input-2,string[input-1]);
    }
    else
    {
        printf("%s",string);
    }

}