///////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and count number of capital character
//
// Input: "Maravallous Multi OS"
// Output: 4
///////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int Countcapital(char *str)
{
    int iCnt = 0;
    
    //Filter
    while (*str != 0)
    {
        if ((*str >= 'A') && (*str <= 'Z'))
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

    iRet =Countcapital(Arr);

    printf("Number of capital character are : %d\n", iRet);

    return 0;
}

