/*
Write a program which search Last occurrence of particular
element from singly linear linked list.
Function should return position at which element is found.
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

int SearchLastOcc(PNODE Head, int No)
{
    int iCnt = 1;
    int iPos = 0;

    if(Head == NULL)
    {
        return -1;
    }

    while(Head != NULL)
    {
        if(Head->data == No)
        {
            iPos = iCnt;
        }
        Head = Head->next;
        iCnt++;        
    }
    
    return iPos;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNum = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);
    
    Display(First);

    printf("Enter the number you want to search : \n");
    scanf("%d", &iNum);

    iRet = SearchLastOcc(First, iNum);
    printf("Last occurance is : %d\n", iRet);

    return 0;
}