#include<stdio.h>
void StrUprX(char *str)
{
    while(* str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str=*str - 32;
        }
        str++;
    }
}
int main()
{
    char Arr[20];

    printf("Please Enter The String \n");
    scanf("%[^'\n']s",Arr);

    StrUprX(Arr);

    printf("String After Conversion is : %s\n",Arr);
    return 0;
}