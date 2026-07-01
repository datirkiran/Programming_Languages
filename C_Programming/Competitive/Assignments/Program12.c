///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and accept one character. Return frequency 
// of that character in string.
// Input: "Marvellous Multi OS" 
// Input: 'M'
// Output: 2         
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int ChkChar(char *str, char ch)
{
    if(str == NULL)
    {
        return 0;
    }
    int count = 0;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char Arr[50] = {'\0'};
    char cValue = 0;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character : \n");
    scanf(" %c", &cValue);

    iRet = ChkChar(Arr, cValue);
    printf("Frequency of character is : %d\n", iRet);

    return 0;
}