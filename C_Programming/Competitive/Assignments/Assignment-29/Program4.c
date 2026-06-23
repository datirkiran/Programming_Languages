/////////////////////////////////////////////////////////////////////////////////////////
// Accept the character from user and check whether it is Small or Not.(a-z)
// Input : a      Output : TRUE
// Input : A      Output : FALSE
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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
        printf("It is Small\n");
    }
    else
    {
        printf("It is Not a Small\n");
    }

    return 0;
}
