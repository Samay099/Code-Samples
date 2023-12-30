/*
Write a program which reverse each element of singly linked list.
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
    printf("Elements of LInked List are :\n");

    while(Head != NULL)
    {
        printf("| %d | ->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

void Reverse(PNODE Head)
{
    int iDigit = 0;
    int iNo = 0;
    int iReverse = 0;

    while(Head != NULL)
    {
        iNo = Head->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iReverse = iReverse * 10 + iDigit;
            iNo = iNo / 10;
        }

        printf("%d\t", iReverse);
        
        iReverse = 0;
        Head = Head->next;
    }

}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    
    Display(First);

    Reverse(First);

    return 0;
}