#include<iostream>
using namespace std;

typedef class Node
{
    public:
        int data;
        struct Node *next;
        struct Node *prev;

        Node()
        {
            data = 0;
            next = NULL;
            prev = NULL;
        }

        Node(int value)
        {
            data = value;
            next = NULL;
            prev = NULL;
        }
}NODE, *PNODE;

class LinkedList
{
    public:
        
        virtual void InsertFirst(int No) = 0;
        virtual void InsertLast(int No) = 0;
        virtual void InsertAtPos(int No, int iPos) = 0;

        virtual void DeleteFirst(int No) = 0;
        virtual void DeleteLast(int No) = 0;
        virtual void DeleteAtPos(int No, int iPos) = 0;

        virtual void Display();
        virtual int Count();
};

class DoublyCL : public LinkedList
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
        int Count();
};

int main()
{

    return 0;
}