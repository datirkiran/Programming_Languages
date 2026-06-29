///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and display it in reverse Order.
// 
// Input: "MaravallouS" 
// Output: "SuollavaraM"          
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;


    start = str;

    while(*str != '\0')
    {
        str++;
    }
    
    str--;
    
    while(start <= str)
    {
        printf("%c", *str);
        str--;
    }

    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enyter string : \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}

