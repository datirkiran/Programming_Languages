///////////////////////////////////////////////////////////////////////////////////////////////
// Accept the number of Row and number of columns from user and display the below pattern.
// Input :  iRow = 4     iCol = 4
// Output : 
//          *  *  *  *
//          *  *  *  
//          *  *   
//          *   
//           
///////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    // Filter for diagonal pattern
    if(iRow != iCol)
    {
        printf("Invalid Parameters");
        printf("Number of rows and columns should be same");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j <=(iCol - i + 1))
            {
                printf("*\t");
            }
             
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