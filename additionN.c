// Accept N numbers from userand perform the addition
//Input
//Value of N=5
//Value:10,20,30,40,50

//output
//Addition is :150
#include<stdio.h>       // for  printf an d scanf
#include<stdlib.h>      //for malloc and calloc
//////////////////////////////////////////////
//
//  Apllication Name:Addition of N numbers
//  Input :N Numbers
//  Output:Addition
//  Author:Vinayak Jadhav
//  Date: 18 sep 2022
//
/////////////////////////////////////////////

int main()
{   
    
    int *Arr=NULL;      //pointer to hold the address of array
    int iSize=0;          //Variable to hold size of array
    int i=0; 
    int iSum=0;           //loop counter      
    printf("please enter how many elements you want?\n");
    scanf("%d",&iSize);

    //Allocate the memory
    Arr=(int *)malloc(iSize *sizeof(int));
    printf("Memory allocation is succesful");

    printf("please enter the elementys\n");

    for(i=0;i<iSize;i++)
    {
        scanf("%d",&Arr[i]);
    }
    //perform Addition
    for(i=0;i < iSize; i++)
    {
        iSum=iSum+Arr[i];
    }
    printf("Addition id :%d\n",iSum);
    
    printf("Memory gets deallocated");
    free(Arr);

    return 0;
}