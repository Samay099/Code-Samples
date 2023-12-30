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
        PNODE First;
        int iCount;

        LinkedList()
        {
            First = NULL;
            iCount = 0;
        }
        
        virtual void InsertFirst(int No) = 0;
        virtual void InsertLast(int No) = 0;
        virtual void InsertAtPos(int No, int iPos) = 0;

        virtual void DeleteFirst(int No) = 0;
        virtual void DeleteLast(int No) = 0;
        virtual void DeleteAtPos(int No, int iPos) = 0;

        void Display()
        {
            PNODE temp = First;

            for(int iCnt = 1; iCnt <= iCount; iCnt++)
            {
                cout<<"| "<<temp->data<<" |->";
                temp = temp->next;
            }
            cout<<"NULL"<<"\n";
        }
        int Count()
        {
            return iCount;
        }
};

class DoublyCL : public LinkedList
{
    private:
        PNODE Last;

    public:

        DoublyCL();
        ~DoublyCL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst(int No);
        void DeleteLast(int No);
        void DeleteAtPos(int No, int iPos);

};

DoublyCL:: DoublyCL()
{
    Last = NULL;
}

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

DoublyCL:: ~DoublyCL()
{}

int main()
{
    DoublyCL obj;
    obj.Display();
    cout<<"Length of Linked List is : "<<obj.Count()<<"\n";

    return 0;
}