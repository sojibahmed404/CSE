#include <iostream>
using namespace std;

struct Node{
    string song;
    Node* next;
};
int main() {
    Node* first=new Node();
    Node* second=new Node();
    Node* third=new Node();
    
    first->song="Believer";
    first->next=second;
    second->song="Let me go";
    second->next=third;
    third->song="Aynaa";
    third->next=NULL;
    
    Node* temp=first;
    
    cout<<"Traversal : ";
    while(temp!=NULL)
    {
        cout<<temp->song<<" -> ";
        temp=temp->next;
    }
    cout << "NULL";
    return 0;
}