
#include<stdio.h>
int strlenX (char *str)
{
    int iCnt=0,i=0 ;
    while(str[i] != '\0')
    {
        iCnt++;
        i++;
    } 
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;
    printf("Enter String  : ");
    scanf("%[^'\n']s",Arr);
    
    iRet=strlenX(Arr);

    printf("Number Of Characters Are %d \n ",iRet);
    return 0;
}