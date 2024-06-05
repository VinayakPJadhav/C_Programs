# include<stdio.h>

int Summation(int iCnt)
{
    int iNo=0;
    int iSum=0;
    for(iNo=1;iNo<=iCnt;iNo++)
    {
        iSum=iSum+iNo;
    }
    return iSum;
        
}
int main()
{
    int iRet =0;
    int iValue=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet=Summation(iValue);
    printf("Summation is : %d \n",iRet);

return 0;
}