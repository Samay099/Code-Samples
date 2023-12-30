/*
Write a program which display largest digit of all element 
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

void DisplayLarge(PNODE Head)
{
    int iDigit = 0;
    int iNo = 0;
    int iMax = 0;

    while(Head != NULL)
    {
        iNo = Head->data;

        while(iNo != 0)
        {
            
            iDigit = iNo % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            else if(iMax == 9)
            {
                break;
            }
            iNo = iNo / 10;
        }

        printf("%d\t", iMax);
        
        iMax = 0;
        Head = Head->next;
    }

}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 419);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);
    
    Display(First);

    DisplayLarge(First);

    return 0;
}