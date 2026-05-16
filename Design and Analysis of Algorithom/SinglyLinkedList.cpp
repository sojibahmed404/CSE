#include <iostream>
using namespace std;

// Node Structure
struct Node
{
    int data;
    Node* next;
};

// Head Pointer
Node* head = NULL;

// Traversing and Displaying
void display()
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

// Insertion at Beginning
void insertBeginning(int value)
{
    cout << "\nBefore Insertion at Beginning: ";
    display();

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = head;

    head = newNode;

    cout << "After Insertion at Beginning : ";
    display();
}

// Insertion at End
void insertEnd(int value)
{
    cout << "\nBefore Insertion at End: ";
    display();

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "After Insertion at End : ";
    display();
}

// Deletion by Value
void deleteValue(int value)
{
    cout << "\nBefore Deletion: ";
    display();

    if(head == NULL)
    {
        cout << "List is Empty." << endl;
        return;
    }

    // Delete First Node
    if(head->data == value)
    {
        Node* temp = head;

        head = head->next;

        delete temp;

        cout << "After Deletion : ";
        display();

        return;
    }

    Node* current = head;

    while(current->next != NULL &&
          current->next->data != value)
    {
        current = current->next;
    }

    if(current->next == NULL)
    {
        cout << value << " Not Found." << endl;
    }
    else
    {
        Node* temp = current->next;

        current->next = current->next->next;

        delete temp;

        cout << "After Deletion : ";
        display();
    }
}

// Searching an Element
void searchElement(int value)
{
    Node* temp = head;

    int position = 1;

    while(temp != NULL)
    {
        if(temp->data == value)
        {
            cout << "\n"
                 << value
                 << " Found at Position "
                 << position
                 << endl;

            return;
        }

        temp = temp->next;
        position++;
    }

    cout << "\n"
         << value
         << " Not Found."
         << endl;
}

// Main Function
int main()
{
    cout << "Initial List: ";
    display();

    insertBeginning(10);

    insertEnd(20);

    searchElement(10);

    deleteValue(20);

    cout << "\nFinal Traversal: ";
    display();

    return 0;
}