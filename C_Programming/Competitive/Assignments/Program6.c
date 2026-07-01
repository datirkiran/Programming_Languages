///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and convert it lower case.
// 
// Input: "Maravallous Multi OS" 
// Output: "marvallous multi os"          
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrx(char *str)
{
    if(str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
     if((*str >= 'A') && *str <= 'Z')
     {
        *str = *str + 32;
     }
     str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enyter string : \n");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    printf("Modified string is : %s\n",Arr);

    return 0;
}

