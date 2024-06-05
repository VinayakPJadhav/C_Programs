#include<stdio.h>
int CountEvenDigits(int iNo)
{
    int iEventCnt=0;
    int iDigit=0;

    if (iNo==0)     // Filter
    {
        return 1;
    }

    
    if(iNo<0)   //  updator
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if((iDigit % 2) == 0)
        {
            iEventCnt++;
        }
        iNo/=10;
    }
    

    return iEventCnt;
}
int main()
{

    int iValue=0,iRet=0;
    printf("Enter the Number :\n ");
    scanf("%d",&iValue);

    iRet=CountEvenDigits(iValue);
    printf("Count of Even Digits is : %d \n ",iRet);
    return 0;

} 