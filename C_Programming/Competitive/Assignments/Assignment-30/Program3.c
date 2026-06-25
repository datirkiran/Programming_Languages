/////////////////////////////////////////////////////////////////////////////////////////////////
// Accept character from user. If Character is small display its corresponding capital character 
// and if it is capital then display its corresponding small character. In other case display
// as it is.
//  Input: Q       Input: m       Input: %         Input: 4
//  Output: q      Output: M      Output: %        output: 4 
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    char i = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Corresponding character is : %c\n", ch + 32);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("Corresponding character is : %c\n", ch - 32);
    }
    else
    {
        printf("No Corresponding character : %c\n", ch);
    }
    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);
    
    Display(cValue);
    
    return 0;
}

