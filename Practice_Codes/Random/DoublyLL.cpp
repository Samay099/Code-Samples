#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE, *PNODE;  

class DoublyLL
{
    private:
        PNODE First;
        int iCount;

    public:

        DoublyLL();
        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
        ~DoublyLL();
};

void DoublyLL:: InsertFirst(int No)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        First->prev = newn;
        newn->next = First;
        First = newn;
    }
    iCount++;
}
void DoublyLL:: InsertLast(int No)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt < iCount; iCnt ++)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

void DoublyLL:: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First->next;
        delete First->prev;
        First->prev = NULL;
    }
    iCount--;
}
void DoublyLL:: DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
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
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void DoublyLL:: Display()
{
    PNODE temp = First;

    cout<<"Elements of Linked list are :"<<"\n";
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"| <=>";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}
int DoublyLL:: Count()
{
    return iCount;
}
DoublyLL:: DoublyLL()
{
    cout<<"Inside Constructor \n";
    First = NULL;
    iCount = 0;
}

DoublyLL:: ~DoublyLL()
{
    cout<<"Inside Destructor \n";
    PNODE temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        temp = First;
        First = First->next;
        delete temp;
    }
}

void DoublyLL:: InsertAtPos(int No, int iPos)
{
    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else 
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        
        PNODE newn = new NODE;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DoublyLL:: DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount+1)
    {
        DeleteLast();
    }
    else 
    {
        PNODE temp = First;

        for(int iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp; 
    }
}

int main()
{   
    DoublyLL obj;
    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;

    while(1)
    {

        cout<<"----------------------------------------------------------------------------\n";
        cout<<"Please select an action : \n\n";
        cout<<"1 : Insert Node at First Position\n";
        cout<<"2 : Insert Node at Last Position\n";
        cout<<"3 : Insert Node at a given Position\n";
        cout<<"4 : Delete Node at First Position\n";
        cout<<"5 : Delete Node at Last Position\n";
        cout<<"6 : Delete Node at a given Position\n";
        cout<<"7 : Display the elements of Linked List\n";
        cout<<"8 : Count number of Nodes in Linked List\n";
        cout<<"9 : Terminate the application\n";  
        cout<<"----------------------------------------------------------------------------\n";

        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value that you want to Insert : \n";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;
            
            case 2:
                cout<<"Enter the value that you want to Insert : \n";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter the value that you want to Insert : \n";
                cin>>iValue;

                cout<<"Enter the Position : \n";
                cin>>iPosition;
                obj.InsertAtPos(iValue, iPosition);
                break;

            case 4:
                obj.DeleteFirst();
                break;

            case 5:
                obj.DeleteLast();
                break;

            case 6:
                cout<<"Enter the Position : \n";
                cin>>iPosition;

                obj.DeleteAtPos(iPosition);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                cout<<"Number of elements are :"<<obj.Count()<<"\n";
                break;

            case 9:
                cout<<"Thank you for using the application\n";
                return 0;
            
            default:
                cout<<"Invalid choice";
                return 0;
        }

    }

    return 0;
}