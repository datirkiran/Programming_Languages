///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and count the number of spaces in that 
// string.
// 
// Input: "Marvellous" 
// Output:0         
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSpaces(char *str)
{
    int iCount = 0;
    if(str == NULL)
    {
        return 0;
    }
    while (*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    int iRet = CountSpaces(Arr);
    printf("Number of spaces in the string is : %d\n",iRet);

    return 0;
}

