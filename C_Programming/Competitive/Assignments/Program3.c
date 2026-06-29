///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and return difference between frequency
// of small character and frequency of capital character.
// Input: "MaravallouS"
// Output: 6    (8-2)
///////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Countsmall(char *str)
{
    int iSmall = 0, iCapital = 0;
    
    //Filter
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }

        str++;
    }
    int iCnt = iSmall - iCapital;
    return iCnt;
}     

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Countsmall(Arr);

    printf("Number of small character are : %d\n", iRet);

    return 0;
}

