///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and convert it lower case.
// 
// Input: "Marvallous Multi OS" 
// Output:"MARVALLOUS MULTI OS"          
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprx(char *str)
{
    if(str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
     if((*str >= 'a') && *str <= 'z')
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

    struprx(Arr);

    printf("Modified string is : %s\n",Arr);

    return 0;
}

