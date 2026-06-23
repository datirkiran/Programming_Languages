/////////////////////////////////////////////////////////////////////////////////////////
// Accept the character from user and check whether it is Alphabet or Not.(A-Z a-z)
// Input : F      Output : TRUE
// Input : &      Output : FALSE
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Alphabet\n");
    }
    else
    {
        printf("It is Not a Alphabet\n");
    }

    return 0;
}
