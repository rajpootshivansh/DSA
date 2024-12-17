#include <iostream>
#include <stack>
#include <map>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x) : data(x), next(NULL) {}
};



node*middle(node*head){


    node*slow=head;
    node*fast=head;
    while (fast!=NULL&& fast->next!=NULL){


        slow=slow->next;
        fast=fast->next;

    }

    return slow;



}

int main()
{
    // Example usage:
    node *head = new node(2);
    head->next = new node(4);
    head->next->next = new node(3);
    head->next->next->next = new node(7);
    head->next->next->next->next = new node(8);
    head->next->next->next->next->next = new node(6);

    // before remove

    // after remove

    head = middle(head);

 cout<<head;
}