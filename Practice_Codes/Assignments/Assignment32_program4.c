/*
Write a program which display smallest digit of all element 
of singly linked list.
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

void DisplaySmall(PNODE Head)
{
    int iDigit = 0;
    int iNo = 0;
    int iMin = 9;

    while(Head != NULL)
    {
        iNo = Head->data;

        while(iNo != 0)
        {
            
            iDigit = iNo % 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            else if(iMin == 0)
            {
                break;
            }
            iNo = iNo / 10;
        }

        printf("%d\t", iMin);
        
        iMin = 9;
        Head = Head->next;
    }

}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 415);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);
    
    Display(First);

    DisplaySmall(First);

    return 0;
}