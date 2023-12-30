/*
Write a program which reutrns addition of all even elements 
from singly linear linked list.
*/

#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head ==NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}
void Display(PNODE Head)
{
    printf("Elements of Linked List are :\n");

    while(Head != NULL)
    {
        printf("| %d | ->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int SecMax(PNODE Head)
{
    int iMax = 0;
    int iSecMax = 0;

    PNODE temp = Head;
    
    iMax = Head->data;

    while(temp != NULL)
    {
        if(temp->data > iMax)
        {
            iSecMax = iMax;
            iMax = temp->data; 
        }
        else if((temp->data > iSecMax) && (temp->data != iMax))
        {
            iSecMax = temp->data;
        }
        temp = temp->next;
    }

    return iSecMax;

}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);
    
    Display(First);

    iRet = SecMax(First);
    printf("Second maximum numeber is :%d", iRet);

    return 0;
}