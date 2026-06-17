///////////////////////////////////////////////////////////////////////////////////////////////
// Accept the number of Row and number of columns from user and display the below pattern.
// Input :  iRow = 5     iCol = 5
// Output :
//            1  2  3  4
//            2  3  4  5
//            3  4  5  6
//            4  5  6  7
////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCount = 0;
  
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, iCount = i; j <= iCol; j++, iCount++)
        {
            printf("%d\t", iCount);
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