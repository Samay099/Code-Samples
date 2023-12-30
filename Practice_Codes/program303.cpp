#include<iostream>
using namespace std;

typedef struct NODE
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    public:
        PNODE First;    // Characteristics
        int iCount;     // Characteristics

        SinglyLL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeletetFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

int main()
{
    SinglyLL obj1();

    return 0;
}