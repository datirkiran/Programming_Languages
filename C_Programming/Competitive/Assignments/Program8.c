///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and toggal the case.
// 
// Input: "Marvellous Multi OS" 
// Output:"mARVELLOUS mULTI os"          
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
    if(str == NULL)
    {
        return;
    }
    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enyter string : \n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    printf("String after toggling case is : %s\n",Arr);

    return 0;
}

