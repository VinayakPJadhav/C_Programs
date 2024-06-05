#include<stdio.h>
void  DisplayTable(int iNo)
{
    int iCnt=0;
    printf("______________________\n");
    printf("Table of %d :\n",iNo);
    printf("______________________\n");
    for(iCnt =1;iCnt<=10;iCnt++)
    {
        {
          printf("%d\n",iNo * iCnt);
          
        }
    }
    printf("______________________\n");
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number \n ");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}