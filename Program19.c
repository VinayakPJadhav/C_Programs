
# include<stdio.h>
void  Display( int iValue)
{
    int iCnt=0;
    iCnt=1;
    while(iCnt<=iValue)
    {
        printf(" ___ Jay Ganesh ___ \n");
        printf(" ___ ********** ___ \n");
        iCnt++ ;
    }
}
int main()
{
    int iNo1=0;

    printf("Enter How many Iteration you want : \n");
    scanf("%d",&iNo1);
   Display(iNo1);
    return 0;
}
