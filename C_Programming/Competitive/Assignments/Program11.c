///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and accept one character. Check whether 
// that character is present in string or not.
// 
// Input: "Marvellous" 
// Input: 'e'
// Output: TRUE         
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    if(str == NULL)
    {
        return FALSE;
    }
    while (*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    char cValue = 0;

    printf("Enter character : \n");
    scanf(" %c", &cValue);

    BOOL bRet = ChkChar(Arr, cValue);
    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}

