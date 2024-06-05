
# include<stdio.h>

void Display( int iNo1)
{
    
    int iCnt=0;
    iCnt=1;
    while( iCnt <=iNo1 )
    {
        printf("Marvellous:%d \n",iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue=0;
    printf("Enter number \n");
    scanf("%d",&iValue);

   Display(iValue);
    return 0;
}

