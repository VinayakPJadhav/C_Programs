#include<stdio.h>
 void DisplayReverse(int iNo)
{
    int iCnt=0;
    printf("\n--------------------------------------------------\n");
    for(iCnt =iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt);  
    }
    printf("\n-------------------------------------------------\n");
}
int main()
{
    int iValue=0;
    printf("Enter The Number \n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);
    return 0;
}