///////////////////////////////////////////////////////////////////////////////////////////////
// Accept the number of Row and number of columns from user and display the below pattern.
// Input :  iRow = 4     iCol = 4
// Output : 
//          A  B  C  D
//          A  B  C  D
//          A  B  C  D
//          A  B  C  D 
////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'A'; j <= iCol; j++)
        {
            printf("%c\t", ch);
            ch++;
        }
        printf("\n");
        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows : ");
    scanf("%d", &iValue1);

    printf("Enter the number of Colunms : ");
    scanf("%d",&iValue2);


    Pattern(iValue1, iValue2);

    return 0;
}