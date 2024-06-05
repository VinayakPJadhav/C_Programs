//  write a Program to  Accept Number From User And Count NUmber of Digit.
// Input : 751  ,7515   ,75,
// Output: 3    ,4      ,2
# include<stdio.h>

int CountDigit(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    if (iNo==0)     // Filter
    {
        return 1;
    }
    if(iNo<0)   //  updator
    {
        iNo=-iNo;
    }
    while(iNo > 0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iCnt=iCnt+iDigit;
    }
    ;
    return iCnt;
}
int main ()
{
    int  iValue =0;
    int iRet=0;
    printf("Enter Number :\n ");
    scanf("%d",&iValue);

    iRet=CountDigit(iValue);

    printf("Number of Digit Are :%d ",iRet);


    return 0;
}



















