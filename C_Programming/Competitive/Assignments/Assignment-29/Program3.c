/////////////////////////////////////////////////////////////////////////////////////////
// Accept the character from user and check whether it is Digit or Not.(0-9)
// Input : 7      Output : TRUE
// Input : d      Output : FALSE
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= 48 && ch <= 57)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is digit\n");
    }
    else
    {
        printf("It is Not a digit\n");
    }

    return 0;
}
