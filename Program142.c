#include<stdio.h>

int CountFrequency(char *str,char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    char cValue='\0';
    int iRet = 0;

    printf("Please enter string : ");
    scanf("%[^'\n']s",Arr);

    printf("Please enter Character:");
    scanf(" %c",cValue);

    iRet = CountFrequency(Arr,cValue);

    printf("Frequency of Letters is  : %d\n",iRet);

    return 0;
}