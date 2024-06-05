# include<stdio.h>

int Summation()
{
    int iNo=0;
    int iSum=0;
    for(iNo=1;iNo<=5;iNo++)
    {
        iSum=iSum+iNo;
    }
    return iSum;
        
}
int main()
{
    int iRet =0;
    iRet=Summation();
    printf("Summation is : %d \n",iRet);

return 0;
}