#include<stdio.h>
char CharTogel(char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {
        return ch + 32;
    }
    else if((ch>='a')&&(ch<='z'))     
    {
        return ch -32;
    }
    else
    {
        return ch;
    }
    
}
int main()
{
    char cValue='\0';
    char cRet='\0';

    printf("Enter The Character\n");
    scanf("%c",&cValue);

    cRet= CharTogel(cValue);
    printf("Toggle Character Is : %c\n",cRet);
    return 0;
}