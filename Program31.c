// using Time complexcity  
//  O(N/2)
#include<stdio.h>
void DisplayFactors(int iNo)
{
    int iCnt=0;
    printf("Factors are : \n");
    for(iCnt =1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            printf(" %d\n",iCnt);
        }
       
    }
}

int main()
{

    int iValue=0;
    
    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);


    return 0;
}