#include<iostream>
using namespace std;

typedef class Node
{
    public:
        int data;
        Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int value)
    {
        data = value;
        next = NULL;
    }


}NODE, *PNODE;

class Stack
{
    private:
        PNODE First;
        int iCount;
    
    public:
        Stack();
        void Push(int No);      // InsertLast
        int Pop();              // DeleteFirst
        void Display();
        int Count();
};

Stack:: Stack()
{
    First = NULL;
    iCount = 0;
}
void Stack:: Push(int No)       // InsertLast
{
    PNODE newn = new Node(No);

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}      
int Stack:: Pop()               // DeleteFirst
{
    int iValue = 0;

    if(iCount == 0)
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    else if(iCount == 1)
    {
        iValue = First->data;
        delete First;
        First = NULL;
    }
    else
    {  
        PNODE temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        
        iValue = temp->next->data;
        delete temp->next;
        temp->next = NULL;
        
    }
    iCount--;
    return iValue;
}              
void Stack:: Display()
{
    cout<<"Elements of stack are : "<<"\n";

    PNODE temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
}
int Stack:: Count()
{
    return iCount;
}



int main()
{

    return 0;
}