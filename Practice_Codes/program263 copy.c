#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;

    struct Node *next;
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

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

     PNODE Temp = *Head;

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {

        while(Temp->next != NULL)
        {
            Temp = Temp->next; 
        }
        Temp->next = newn;
    }

}

void Display(PNODE Head)
{
    printf("Elements of LinkedList are : \n");

    while(Head != NULL)
    {
        printf("|%d|->", Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount ++;
        Head = Head->next;
    }
    return iCount;
}

int main()
{
    PNODE First = 0;
    int iRet = 0;

    InsertLast(&First,11);
    InsertLast(&First,21);
    InsertLast(&First,51);
    InsertLast(&First,101);

    Display(First);

    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    InsertFirst(&First,10);
    InsertFirst(&First,20);

    Display(First);

    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    return 0;
}