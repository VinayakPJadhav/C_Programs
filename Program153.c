#include<stdio.h>
void StrToggleX(char *str)
{
    while(* str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str=*str - 32;
        }
        
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str=*str + 32;
        }
        str++;
        
    }
}
int main()
{
    char Arr[20];

    printf("Please Enter The String \n");
    scanf("%[^'\n']s",Arr);

    StrToggleX(Arr);

    printf("String After Toggle is : %s\n",Arr);
    return 0;
}