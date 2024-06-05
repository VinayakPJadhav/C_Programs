
#include<stdio.h>

int main()
{
    char Arr[50];
    printf("Enter Your Name : ");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);
    printf("Your Name is : %s \n",Arr);
    return 0;
}