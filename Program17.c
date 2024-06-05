
# include<stdio.h>

void Display( int iValue)
{
    int iCnt=0;
    for(iCnt=1 ;iCnt <= iValue ;iCnt++)
    {
        printf(" ___ Jay Ganesh ___ \n");
        printf(" ___ ********** ___ \n");
    }
}
int main()
{
    int iNo=0;
    printf("Enter how many iteration you want  : \n ");
    scanf("%d",&iNo);

   Display(iNo);
    return 0;
}

