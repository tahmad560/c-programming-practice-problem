#include<stdio.h>
int main()
{
    char input;
    printf("Enter the charecter you want to take input : ");
    scanf(" %c",&input);
    if(input=='a'||input=='A'||input=='e'||input=='E'||input=='i'||input=='I'||input=='o'||input=='O'||input=='u'||input=='U')
    {
        printf("This character is vowel");
    }
    else 
    {
        printf("This character is consonant");
    }
}