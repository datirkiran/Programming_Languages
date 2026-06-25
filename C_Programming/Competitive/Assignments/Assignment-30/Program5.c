/////////////////////////////////////////////////////////////////////////////////////////////////
// Accept character from user and display its ASCII value in decimal, octal, hexadecimal format.
// as it is.
//  Input: A       Input: Decimal  65     Octal 0101       Hexadecimal 0X41
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    char i = '\0';

    if((ch >= 'A' && ch <= 'Z') ||
       (ch >= 'a' && ch <= 'z')) 
    {
    printf("Decimal     : %d\n", ch);
    printf("Octal       : 0%o\n", ch);
    printf("Hexadecimal : 0X%X\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);
    
    Display(cValue);
    
    return 0;
}

