///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and count number of small character
//
// Input: "Maravallous"
// Output: 4
///////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Countsmall(char *str)
{
    int iCnt = 0;
    
    //Filter
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
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

