#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node{
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int iNo){
    // Step 1 :Allocation The memory For New Node

    PNODE newn =(PNODE)malloc(sizeof(NODE));

    // Step 2: Initalise the Node

    newn->data=iNo;
    newn->next=NULL;

    // Step 3 : Check Linked List Empty or Not

    if(*First == NULL)
    {
        *First=newn;
    }
    else // If List Contains At least One Node
    {
        newn->next=*First;
        *First=newn;
    }

}


void Display(PNODE First){
    printf("Elements of Linked List Are : \n");
    while(First != NULL){
        printf("|%d|->",First->data);
        First=First->next;
    }
    printf("\n");

}


int main(){
    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);
    return 0;
}