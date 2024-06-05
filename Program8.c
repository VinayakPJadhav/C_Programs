/////////////////////////////////////////////////////////////
//
// Steps to follow while Programming
///////////////////////////////////////////////////////////////////////
// Step 1 Undersand the problem statment
// Step 2 Write the algorithm
// Step 3 Decide the Programming Laguage
// Step 4 Write the Program
// Step 5 Test the Program
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//Problem statment :
//Accept number from user and check whether it is,divisible by 5 or not
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//Algorithm
/////////////////////////////////////////////////////////////////////////


/*
    START
        Accept number from user as No
        Divide that NO by 5 And Check the value of remainder
        If the Value is 0
            Then display As NO is Divisible By 5
        Otherwise
            Display as NO is not Divisible By 5
    END        
*/


/////////////////////////////////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
// Funaction Namde: DivisibleByFive
// Description : To check Whether input is divisible by 5 or not
// Input: Integer
// Output : Integer
// Author : Vinayak Popat Jadhav(LG1629)
// Date :
//
///////////////////////////////////////////////////////////////////////
int DivisibleByFive(int iNO)
{

    int iAns =0;
    iAns = iNO % 5;

    if(iAns ==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
////////////////////////////////////////////////////////////////////
//Entry point function 
////////////////////////////////////////////////////////////////////
int main ()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number: \n");
    scanf("%d",&iValue);


    iRet=DivisibleByFive(iValue);
    if(iRet == 0)
    {
        printf("%d is  not  Divisible By Five \n ",iValue);
    }
    else
    {
        printf("%d is  Divisible by five \n ",iValue);
    }
return 0;
}