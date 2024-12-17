#include <bits/stdc++.h>
#include <stack>
#include <array>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x) : data(x), next(NULL) {}
};

node *delmiddle(node *head)
{

    node *slow = head;
    node *fast = head;
fast= head->next->next;


    // while (temp != NULL)
    // {

    //     n++;

    //     temp = temp->next;
    // }

    // int result = n / 2;

    // temp=head;


    // while (temp != NULL)
    // {

    //     result--;

    //     if (result == 0)
    //     {

    //         node*middle = temp->next;
    //         temp->next = temp->next->next;
    //         delete middle ;
    //         break;
    //     }

    //     temp = temp->next;
    // }
    // return head;

while (fast!=NULL&&fast->next!=NULL){

    slow=slow->next;
    fast=fast->next->next;


}
node*middle = slow->next;

slow->next=slow->next->next;


delete middle ;


return head;

}

void printList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // Example usage:
    node *head = new node(2);
    head->next = new node(4);
    head->next->next = new node(3);
    head->next->next->next = new node(7);
    head->next->next->next->next = new node(8);

    // before remove

    // after remove

    head = delmiddle(head);

    printList(head);
}