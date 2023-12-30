#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE, *PNODE;

class DoublyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:

        DoublyCL();
        ~DoublyCL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst(int No);
        void DeleteLast(int No);
        void DeleteAtPos(int No, int iPos);

        void Display();
        void Count();
};

void DoublyCL:: InsertFirst(int No)
{}
void DoublyCL:: InsertLast(int No)
{}
void DoublyCL:: InsertAtPos(int No, int iPos)
{}

void DoublyCL:: DeleteFirst(int No)
{}
void DoublyCL:: DeleteLast(int No)
{}
void DoublyCL:: DeleteAtPos(int No, int iPos)
{}

void DoublyCL:: Display()
{}
void DoublyCL:: Count()
{}

DoublyCL:: DoublyCL()
{}
DoublyCL:: ~DoublyCL()  
{}


int main()
{

    return 0;
}