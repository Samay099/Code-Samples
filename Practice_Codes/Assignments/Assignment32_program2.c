/*
Write a program which display all palindrome element 
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

void DisplayPallindrome(PNODE Head)
{
    int iDigit = 0;
    int iNo = 0;
    int iReverse = 0;
    int temp = 0;

    while(Head != NULL)
    {
        iNo = Head->data;
        temp = Head->data;

        while(temp != 0)
        {
            iDigit = temp % 10;
            iReverse = iReverse * 10 + iDigit;
            temp = temp / 10;
        }

        if(iNo == iReverse)
        {
            printf("%d\t", iReverse);
        }
        
        iReverse = 0;
        Head = Head->next;
    }

}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    
    Display(First);

    DisplayPallindrome(First);

    return 0;
}