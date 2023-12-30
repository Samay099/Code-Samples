#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;      // #New
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;      // #New

    if(*Head == NULL)       // LL is empty
    {
        *Head = newn;
    }
    else                    // LL contains atleast one node in it
    {
        (*Head)->prev = newn;       //#New
        newn->next = *Head;
        *Head = newn;
    }

}

void InsertLast(PPNODE Head, int No)
{}

void InsertAtPos(PPNODE Head, int No, int iPos)
{}

void DeleteFirst(PPNODE Head)
{}

void DeleteLast(PPNODE Head)
{}

void DeleteAtPos(PPNODE Head, int iPos)
{}

void Display(PNODE Head)
{}

int Count(PNODE Head)
{
    return 0;
}

int main()
{
    PNODE First = NULL;

    return 0;
}