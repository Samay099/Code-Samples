#include<iostream>
using namespace std;

typedef struct NODE
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE First;    // Characteristics
        int iCount;     // Characteristics

    public:
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

// Implementations of all behaviours
/*
    Return_Value Class_Name :: Function_Name(Parameter_List)
    {
        Finction_Body;
    }
*/

void SinglyLL :: InsertFirst(int No)
{}
void SinglyLL :: InsertLast(int No)
{}
void SinglyLL :: InsertAtPos(int No, int iPos)
{}

void SinglyLL :: DeletetFirst()
{}
void SinglyLL :: DeleteLast()
{}
void SinglyLL :: DeleteAtPos(int iPos)
{}

void SinglyLL :: Display()
{}
int SinglyLL :: Count()
{
    First = NULL;
    iCount = 0;
}

SinglyLL :: SinglyLL()
{}

int main()
{
    SinglyLL obj1();

    return 0;
}