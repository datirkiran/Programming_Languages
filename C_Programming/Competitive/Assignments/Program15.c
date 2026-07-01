///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user reverse that string in place. 
//
// Input: "abcd"       
// Output: "dcba"            
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void ReverseString(char *str)
{
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    ReverseString(Arr);

    printf("Reversed string is : %s\n", Arr);

    return 0;
}

