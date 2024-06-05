// Accpet  N Number From USer and Perform Addition of that N Number 
# include<stdio.h>
# include<stdlib.h>
int Summation(int Arr[],int iSize)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *ptr=NULL;
    int iCnt=0,iRet=0,iLegnth =0;
    printf("Entre Number Of Element You wnat To store");
    scanf("%d",&iLegnth);

    ptr=(int *)malloc(iLegnth*sizeof(int));


    printf("Enter The  element : \n");
    for(iCnt=0;iCnt<iLegnth;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements From Array Are : \n");
    for(iCnt=0;iCnt<iLegnth;iCnt++)
    {
         printf("%d \n",ptr[iCnt]);
    }
   
    iRet=Summation(ptr,iLegnth);
    printf("Addition of All elements is : %d\n",iRet);

    free(ptr);

    return 0;
}

 