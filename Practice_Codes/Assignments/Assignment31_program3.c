/*
Write a program which reutrns second maximum element 
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

int SumEven(PNODE Head)
{
    int iCnt = 0;
    int iNo = 0;
    int iSum = 0;
    
    while(Head != NULL)
    {
        iNo = Head->data;

        if(Head == NULL)

        if(iNo % 2 == 0)
        {
            iSum = iSum + iNo;
        }

        Head = Head->next;
    }

    return iSum;

}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);
    
    Display(First);

    iRet = SumEven(First);
    printf("Sum of all even elements is :%d", iRet);

    return 0;
}