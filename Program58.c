# include<stdio.h>
int  DisplayReverse( int iNo)
{
    int iRev=0;
    int iDigit=0;

    if(iNo<0)   //  updator
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+ iDigit;
        iNo=iNo/10;
    }
    return iRev;
}
int main()
{

    int iValue=0,iRet=0 ;
    printf("Enter the Number :\n ");
    scanf("%d",&iValue);

    iRet=DisplayReverse(iValue);
    printf("Reverse Number is : %d \n",iRet);
    
    return 0;

} 