#include<stdio.h>
int  CountSpace(char *str)
{
    int iCount=0;
    while(* str != '\0')
    {
        if(*str == ' ') 
        {
            iCount++;
        }
        str++;
        
    }
    return iCount;
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Please Enter The String \n");
    scanf("%[^'\n']s",Arr);

    iRet=CountSpace(Arr);

    printf("Number Od White Spaces Are  : %d\n",iRet);
    return 0;
}