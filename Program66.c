//Write A Program tO Accept Number From User and Return The Largest Digit 
//Number 
//Input:958
//Output:9
# include<stdio.h>

int MinDigit(int iNo)
{
    int iDigit =0;
    int iMin=9;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo !=0)
    {
        iDigit=iNo%10;
        if(iDigit<iMin)
        {
            iMin=iDigit;
        }
        iNo= iNo/10;
    }
    return iMin;
}

int main()
{
    int iValue=0;
   int iRet=0;
    printf("Enter the Number :\n ");
    scanf("%d",&iValue);

    iRet=MinDigit(iValue);
    printf("Smallgest Number is :%d ",iRet);
    return 0;
}