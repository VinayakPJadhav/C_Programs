//Accecpt number from user and perform addition of Two Number
#include<stdio.h>

int AdditionofNumbers(int iNo1,int iNo2)
{
    int iAns =0;

    iAns= iNo1 + iNo2;
    return iAns;
}
int main()
{
    int ivalue1=0,ivalue2=0;
    int iRet=0;

    printf("Enter first number :\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number : \n");
    scanf("%d",&ivalue2);

    iRet=AdditionofNumbers(ivalue1,ivalue2);
    printf("Addition is  : %d \n",iRet);

    return 0;

}