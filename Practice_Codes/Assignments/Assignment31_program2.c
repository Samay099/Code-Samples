/*
Write a program which displays all elements which are Prime
from a singly linear linked list.
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

void DisplayPrime(PNODE Head)
{
    int iCnt = 0;
    int iNo = 0;

    printf("Prime numbers are :\n");

    while(Head != NULL)
    {
        iNo = Head->data;

        for(iCnt = 2; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                break;
            }
        }

        if(iCnt == (iNo/2)+1)
        {
            printf("%d \t", iNo);
        }

        Head = Head->next;
    }

}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);
    
    Display(First);

    DisplayPrime(First);

    return 0;
}