#include<stdio.h>
void strcpyLowX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest=*src + 32;
        }
        
        else 
        {
            *dest=*src;
        }
        src++;
        dest++;
    }
    *dest='\0';
}
int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please Enter The String \n");
    scanf("%[^'\n']s",Arr);

    strcpyLowX(Arr,Brr);   // strcpyX(100,200);

    printf("Copied String Is : %s\n",Brr);
    printf("Original String is :%s\n",Arr);

    return 0;
}