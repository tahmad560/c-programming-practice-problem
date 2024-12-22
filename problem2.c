#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int input;
    int s_length;
    scanf("%d",&input);
    for(int i=0;i<input;i++)
    {
        scanf("%s",string);
        s_length= strlen(string);
    if(s_length>10)
    {
        printf("%c%d%c \n",string[0],s_length-2,string[s_length-1]);
    }
    else
    {
        printf("%s \n",string);
    }
    }
}