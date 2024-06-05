#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char ch)
{
    if((ch>=48)&&(ch<=59))
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
    char cValue='\0';
    bool bRet=false;

    printf("Please Enter One Character \n");
    scanf("%c",&cValue);

    bRet=IsDigit(cValue);
    if(bRet==true)
    {
        printf("%c is a Digit \n ",cValue);
    }
    else
    {
        printf("%c is NOT a Digit  \n ",cValue);
    }


    return 0;
}