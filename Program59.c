//Accept Number from User and check The Number is Palndrom or Not
# include<stdio.h>
#include<stdbool.h>
bool CheckPallindrome(int iNo)
{
    int iRev=0,  iDigit=0;
    int iTemp=iNo;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+ iDigit;
        iNo=iNo/10;
    }
    if(iRev==iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue=0;
    bool bRet;
    printf("Enter the Number :\n ");
    scanf("%d",&iValue);

    bRet=CheckPallindrome(iValue);
    if(bRet== true)
    {
        printf("%d is Pallindrome Number \n" ,iValue);
    }
    else
    {
        printf("%d is NOT A Pallindrome Number \n ",iValue);
    }

    return 0;
}