
#include <iostream>
#include <stack>
using namespace std;

// brute

struct node
{
    int data;
    node *next;
    node(int x) : data(x), next(NULL) {}
};

// node *reverse(node *head){

//     node *temp = head;

//     stack<int> stt;

//     while (temp != NULL)
//     {

//         stt.push(temp->data);
//         temp = temp->next;
//     }

// temp=head;

//     while (temp != NULL)
//     {

//        temp->data = stt.top();
//         stt.pop();
//         temp = temp->next;
//     }

//     return head;
// }



node*reverselist(node*head){


    node*temp=head;
    node*prev=NULL;


    while(temp!=NULL){


        node*front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;

    }

    return prev;
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

 head = reverselist(head);


    printList(head);
}
