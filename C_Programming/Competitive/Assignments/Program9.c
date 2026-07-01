///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and display only digits from that string.
// 
// Input: "Marve89llous1121" 
// Output:891121          
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
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
    printf("\n");
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}

