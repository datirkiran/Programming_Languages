///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and accept one character. Return index 
// of first occurrence of that character.
//
// Input: "Marvellous Multi OS" 
//
// Input: 'M'       Input:'W'         Input:'e'
// Output: 0        Output: -1        Output: 4      
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    if(str == NULL)
    {
        return -1;
    }
    int count = 0;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            return count;
        }
        str++;
        count++;
    }
    return -1;
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

    iRet = FirstChar(Arr, cValue);
    
    printf("Character Location is : %d\n", iRet);

    return 0;
}

