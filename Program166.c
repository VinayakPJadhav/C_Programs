#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    // Step 1: Allocate The Memory For new node

    PNODE newn = (PNODE)malloc(sizeof(NODE));
    // Step 2: Initalise the node

    newn->data=No;
    newn->next=NULL;
    
    //step 3: Check Linked List is Empty or NOt
    if(*First ==NULL)
    {
        *First=newn;
    }
    else // If List Contains At least One node
    {
        newn->next=*First;
        *First=newn;
    }

}

void Display(PNODE First)
{
    // Logic
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);
    
    Display(Head);

    return 0;
}