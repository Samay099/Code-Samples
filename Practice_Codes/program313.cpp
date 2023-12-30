 #include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE;

class SinglyLL
{
    private:
        PNODE First;    // Characteristics
        int iCount;     // Characteristics

    public:
        SinglyLL();
        ~SinglyLL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
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
{
    PNODE newn = NULL;
    newn = new NODE;        // newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)       //LL is empty
    {
        First = newn;
    }
    else                    // LL contains atleast one node in it
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void SinglyLL :: InsertLast(int No)
{
    PNODE newn = NULL;
    newn = new NODE;        // newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)       //LL is empty
    {
        First = newn;
    }
    else                    // LL contains atleast one node in it
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

void SinglyLL:: DeleteFirst()
{
    if(First == NULL)                   //empty LL
    {
        return;
    }
    else if(First->next == NULL)        //Single Node in LL
    {
        delete First;
        First = NULL;
    }
    else                                //More than one Node in LL
    {
        PNODE temp = First;

        First = First->next;
        delete temp;
    }
    iCount--;
}
void SinglyLL:: DeleteLast()
{
    if(First == NULL)                   //empty LL
    {
        return;
    }
    else if(First->next == NULL)        //Single Node in LL
    {
        delete First;
        First = NULL;
    }
    else                                //More than one Node in LL
    {
        PNODE temp = First;

        while(temp->next->next != NULL)      // TYPE 3
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
    iCount--;
}


void SinglyLL:: Display()
{
    PNODE temp = First;

    cout<<"Elements of Linked list are :"<<"\n";
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"| ->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}
int SinglyLL:: Count()
{
    return iCount;
}

SinglyLL:: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

SinglyLL:: ~SinglyLL()
{
    cout<<"Inside Destructor\n";
    PNODE temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCount++)
    {
        temp = First;
        First = First->next;
        delete temp;
    }
}

void SinglyLL:: InsertAtPos(int No, int iPos)
{
    if((iPos < 1)||(iPos > iCount+1))
    {
        cout<<"Invalid Position\n";
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

        newn->next = temp->next;
        temp->next = newn;
        
        iCount++;
    }   
}

void SinglyLL:: DeleteAtPos(int iPos)
{
    if((iPos < 1)||(iPos > iCount))
    {
        cout<<"Invalid Position\n";
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
        PNODE tempX = NULL;

        for(int iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        tempX = temp->next;
        temp->next = temp->next->next;
        delete tempX;
    
        iCount--;
    } 
}


int main()
{
    SinglyLL obj;
    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;

    while(1)
    {
        cout<<"------------------------------------------------------\n";
        cout<<"Please Enter Your Choice : \n\n";

        cout<<"1 : Insert Node at First Position\n";
        cout<<"2 : Insert Node at last Position\n";
        cout<<"3 : Insert Node at a given Position\n";
        cout<<"4 : Delete Node from First Position\n";
        cout<<"5 : Delete Node from Last Position\n";
        cout<<"6 : Delete Node from a given Position\n";
        cout<<"7 : Display the elements of Linked List\n";
        cout<<"8 : Count number of Nodes in Linked List\n";
        cout<<"9 : Terminate the application\n";  

        cout<<"------------------------------------------------------\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value that you want to insert : "<<"\n";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;
            
            case 2:
                cout<<"Enter the value that you want to insert : "<<"\n";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter the value that you want to insert : "<<"\n";
                cin>>iValue;

                cout<<"Enter the position : "<<"\n";
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
                cout<<"Enter the position : "<<"\n";
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