#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* pre;
    Node* next;
};

int main() {

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // First node
    head->data = 10;
    head->pre = NULL;
    head->next = second;

    // Second node
    second->data = 20;
    second->pre = head;
    second->next = third;

    // Third node
    third->data = 30;
    third->pre = second;
    third->next = NULL;

    // Forward Traversal
    Node* temp = head;

    cout << "Forward : NULL <- ";

    while(temp != NULL)
    {
        cout << temp->data;

        if(temp->next != NULL)
        {
            cout << " <-> ";
        }

        temp = temp->next;
    }

    cout << " -> NULL";

    // Backward Traversal
    temp = third;

    cout << endl;
    cout << "Backward : NULL <- ";

    while(temp != NULL)
    {
        cout << temp->data;

        if(temp->pre != NULL)
        {
            cout << " <-> ";
        }

        temp = temp->pre;
    }

    cout << " -> NULL";

    return 0;
}