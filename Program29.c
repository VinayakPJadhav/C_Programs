# include<stdio.h>

int Factorial(int iCnt)
{
    int iNo=0;
    int iFact=1;
    for(iNo=1;iNo<=iCnt;iNo++)
    {
        iFact=iFact*iNo;
    }
    return iFact;
}
int main()
{
    int iRet =0;
    int iValue=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Factorial of %d  is : %d \n",iValue,iRet);


    return 0;
}

