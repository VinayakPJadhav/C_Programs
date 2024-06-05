// Accpet  N Number From USer and Perform Addition of that N Number 
# include<stdio.h>
int Summation(int Data[],int iSize)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Data[iCnt];
    }
    return iSum;
}

int main()
{
    int Arr[5] ,iCnt=0,iRet=0;
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
   
    iRet=Summation(Arr,5);
    printf("Addition of All elements is : %d\n",iRet);


    return 0;
}

 