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
        int Pop();              // DeleteLast
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
int Stack:: Pop()               // DeleteLast
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
    if(First == NULL)
    {
        cout<<"Nothing to display as Stack is empty\n";
        return;
    }
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
    Stack obj;
    int iChoice = 1;
    int iValue = 0;
    int iRet = 0;

    cout<<"----------------------------------------------------------\n";
    cout<<"Dynamic Implementation of Stack\n";
    cout<<"----------------------------------------------------------\n";

    while(iChoice != 0)
    {
        cout<<"----------------------------------------------------------\n";
        cout<<"1 : PUSH element into stack\n";
        cout<<"2 : POP element from the stack\n";
        cout<<"3 : Display elements from stack\n";
        cout<<"4 : Count number of elements from stack\n";
        cout<<"0 : Terminate the application\n";
        cout<<"----------------------------------------------------------\n";

        cout<<"Please enter the option : \n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the element that you want to push : "<<"\n";
                cin>>iValue;
                obj.Push(iValue);
                break;
            
            case 2:
                iRet = obj.Pop();
                if(iRet != -1)
                {
                    cout<<"Poped element from stack is : "<<iRet<<"\n";
                }
                break;
            
            case 3:
                obj.Display();
                break;

            case 4:
                cout<<"Number of elements in Stack is : "<<obj.Count()<<"\n";
                break;
            
            case 0:
                cout<<"Thank you for using the application\n";
                break;
            
            default:
                cout<<"Please enter valid option\n";
                break;
        
        }   // End of Switch
        
    }   // End of while

    return 0;
}   // End of main