//////////////////////////////////////////////////////////////////////////////////////////////
// Accept division of student from user and depends on division display exam timing.there
// are 4 division on schoolas A,B,C,D. Examof division A at 7AM, B at 8:30AM, C at 9:20AM 
// and D at 10:30AM. 
//               Input : C                 Output : Your Exam at 9:20AM
//               Input : d                 Output : Your Exam at 10:30AM
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DiplaySchedule(char chDiv)
{
    if (chDiv == 'A' || chDiv == 'a')
    {
       printf("Your Exam at 7AM\n");   
    }
    else if (chDiv == 'B' || chDiv == 'b')
    {
       printf("Your Exam at 8:30AM\n");   
    }
     else if (chDiv == 'C' || chDiv == 'c')
    {
       printf("Your Exam at 9:20AM\n");   
    }
     else if (chDiv == 'D' || chDiv == 'd')
    {
       printf("Your Exam at 10:30AM\n");   
    }
    else
    {
        printf("Invalid Division Entered");
    }  
}

int main()
{
    char cValue = '\0';
   
    printf("Enter the Division : ");
    scanf("%c",&cValue);

    DiplaySchedule(cValue);

    return 0;
}
