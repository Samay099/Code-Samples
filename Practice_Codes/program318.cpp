#include<iostream>
using namespace std;

typedef class Node
{
    public:
        int data;
        Node *next;
        Node *prev;

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
{
    PNODE newn = new Node(No);

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    Last->next = First;
    First->prev = Last;
    iCount++;

}
void DoublyCL:: InsertLast(int No)
{
    PNODE newn = new Node(No);

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last = Last->next;
    }
    Last->next = First;
    First->prev = Last;
    iCount++;
}
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

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.Display();
    cout<<"Length of Linked List is : "<<obj.Count()<<"\n";

    return 0;
}