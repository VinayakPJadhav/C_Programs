#include<stdio.h>
void DisplayEvenOddDigits( int iNo)
{
    int iEventCnt=0, iOddCnt=0;
    int iDigit=0;

    if (iNo==0)     // Filter
    {
       printf("Number of Even Digit is : 1 \n");
       printf("Number of Odd Digit is : 0 \n");
       return;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;
        if((iDigit % 2) == 0)
        {
            iEventCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iNo/=10;
    }
    printf("Number of Even Digit is : %d \n ",iEventCnt);
    printf("Number of Odd Digit is : %d ",iOddCnt);

}
int main()
{

    int iValue=0;
    printf("Enter the Number :\n ");
    scanf("%d",&iValue);

    DisplayEvenOddDigits(iValue);
    
    return 0;

} 