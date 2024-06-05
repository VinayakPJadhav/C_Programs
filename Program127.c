#include<stdio.h>
#include<stdbool.h>

bool CheckSmaller(char ch)
{
    if((ch>=97)&&(ch<=122))
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

    bRet=CheckSmaller(cValue);
    if(bRet==true)
    {
        printf("%c is a small case Letter \n ",cValue);
    }
    else
    {
        printf("%c is NOT a small case Letter \n ",cValue);
    }
    return 0;
}