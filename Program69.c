// Accpet  N Number From USer and Perform Addition of that N Number 
# include<stdio.h>
int main()
{
    int Arr[5] ,iCnt=0;
    printf("Enter The  element : \n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements From Array Are : \n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
         printf("%d \n",Arr[iCnt]);
    }
    return 0;
}

 