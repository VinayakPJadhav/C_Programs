/*
Row 4
Col 4

1   *   *   *
*   2  *   *
*   *   3   *
*   *   *   4

*/ 

#include<stdio.h>
void  Display(int iRow,int iCol)
{
    int i=0 , j=0;

    if(iRow != iCol)
    {
        printf("ROw Number And Column Numbers Are Different \n ");
        return;
    }
    for(i=1;i<=iRow;i++)
    {
        
        for(j=1;j<=iCol;j++)
        {
            if(i==j)
            {
                printf("%d\t",i);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }   

}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter the Number  of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter the Number  of Columns : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}