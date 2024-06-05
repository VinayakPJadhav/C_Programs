#include<stdio.h>
#include<stdbool.h>

int DivisibleByFive(int iNO)
{
    int iAns1 =0 , iAns2=0;

    iAns1=iNO % 3;
    iAns2 = iNO % 5;

    if((iAns1  ==0 )&&(iAns2 ==0))
    {
        return true;
    }
    else{
        return false;
    }
   
}

int main ()
{
    int iValue=0;
    bool bRet =false;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);


    bRet=DivisibleByFive(iValue);
    if(bRet == true)
    {
        printf("%d is   Divisible 3 and 5 \n ",iValue);
    }
    else
    {
        printf("%d is not  Divisible by 3 or 5  \n ",iValue);
    }
    
return 0;
}