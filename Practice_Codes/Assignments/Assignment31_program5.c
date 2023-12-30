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

void SumDigit(PNODE Head)
{
    int iNo = 0;
    int iSum = 0;
    int iDigit = 0;
    

    while(Head != NULL)
    {
        iNo = Head->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10; 
        }

        printf("%d \t", iSum);

        iSum = 0;
        Head = Head->next;
    }

}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);
    
    Display(First);

    SumDigit(First);

    return 0;
}