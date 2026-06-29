///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and check whether it contains vowels
// or not.
// Input: "Maravallous"   Input: "Demo"         Input:"xyz"
// Output: TRUE           Output: TRUE          Output: FALSE
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int ChkVowels(const char * str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
        *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return 1;
            
        }
        str++;
    }
    return 0;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = ChkVowels(Arr);

  if(iRet == 1)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    
    return 0;
}


