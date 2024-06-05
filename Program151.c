#include<stdio.h>
void StrLwrX(char *str)
{
    while(* str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    StrLwrX(Arr);

    printf("String After Conversion is : %s\n",Arr);
    return 0;
}