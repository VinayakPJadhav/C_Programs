#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
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

    bRet=CheckCapital(cValue);
    if(bRet==true)
    {
        printf("%c is a Capital case Letter \n ",cValue);
    }
    else
    {
        printf("%c is NOT a Capital  case Letter \n ",cValue);
    }


    return 0;
}