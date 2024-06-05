//Write A Program tO Accept Number From User and Return The Largest Digit 
//Number 
//Input:958
//Output:9
# include<stdio.h>

int MAxDigit(int iNo)
{
    int iDigit =0;
    int iMax=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo !=0)
    {
        iDigit=iNo%10;
        if(iDigit>iMax)
        {
            iMax=iDigit;
        }
        if(iMax==9)
        {
            break;
        }
        iNo= iNo/10;
    }
    return iMax;
}

int main()
{
    int iValue=0;
   int iRet=0;
    printf("Enter the Number :\n ");
    scanf("%d",&iValue);

    iRet=MAxDigit(iValue);
    printf("Largest Number is :%d ",iRet);
    return 0;
}