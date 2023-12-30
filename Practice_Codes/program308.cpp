#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

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
void SinglyLL:: InsertAtPos(int No, int iPos)
{}

void SinglyLL:: DeletetFirst()
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

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}
void SinglyLL:: DeleteAtPos(int iPos)
{}

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
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

SinglyLL:: ~SinglyLL()
{
    cout<<"Inside Destructor\n";
}

int main()
{
    int iRet = 0; 

    SinglyLL obj1;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.InsertLast(101);
    obj1.InsertLast(111);

    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of Elements of Linked List"<<iRet<<"\n";

    obj1.DeletetFirst();
    obj1.DeleteLast();

    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of Elements of Linked List"<<iRet<<"\n";
    
    return 0;
}