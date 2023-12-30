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

class Queue
{
    private:
        PNODE First;
        int iCount;
    
    public:
        Queue();
        void Enqueue(int No);      // InsertLast
        int Dequeue();              // DeleteFirst
        void Display();
        int Count();
};

Queue:: Queue()
{
    First = NULL;
    iCount = 0;
}
void Queue:: Enqueue(int No)       // InsertLast
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
int Queue:: Dequeue()               // DeleteFirst
{
    int iValue = 0;

    if(iCount == 0)
    {
        cout<<"Queue is empty\n";
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
        iValue = First->data;
        PNODE temp = First;
        First = First->next;
        delete temp;
    }
    iCount--;
    return iValue;
}              
void Queue:: Display()
{
    if(First == NULL)
    {
        cout<<"Nothing to display as Queue is empty\n";
        return;
    }
    cout<<"Elements of Queue are : "<<"\n";

    PNODE temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
}
int Queue:: Count()
{
    return iCount;
}



int main()
{
    Queue obj;
    int iChoice = 1;
    int iValue = 0;
    int iRet = 0;

    cout<<"----------------------------------------------------------\n";
    cout<<"Dynamic Implementation of Queue\n";
    cout<<"----------------------------------------------------------\n";

    while(iChoice != 0)
    {
        cout<<"----------------------------------------------------------\n";
        cout<<"1 : Insert element into Queue\n";
        cout<<"2 : Remove element from the Queue\n";
        cout<<"3 : Display elements from Queue\n";
        cout<<"4 : Count number of elements from Queue\n";
        cout<<"0 : Terminate the application\n";
        cout<<"----------------------------------------------------------\n";

        cout<<"Please enter the option : \n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the element that you want to Enqueue : "<<"\n";
                cin>>iValue;
                obj.Enqueue(iValue);
                break;
            
            case 2:
                iRet = obj.Dequeue();
                if(iRet != -1)
                {
                    cout<<"Dequeueed element from Queue is : "<<iRet<<"\n";
                }
                break;
            
            case 3:
                obj.Display();
                break;

            case 4:
                cout<<"Number of elements in Queue is : "<<obj.Count()<<"\n";
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