#include <iostream>
#include <stack>
using namespace std;

// struct node
// {
//     int data;
//     node *next;
//     node(int x) : data(x), next(NULL) {}
// };

// bool palindrome(node *num1)
// {

//     node *temp = num1;

//     stack<int> stt;

//     while (temp != NULL)
//     {
//         stt.push(temp->data);

//         temp = temp->next;
//     }

//     while (temp != NULL)
//     {

//         if (temp->data != stt.top())
//             return false;

//         temp = temp->next;
//         stt.pop();
//     }
//     return true;
// }

class node
{

public:
    int data;
    node *next, *prev;

    node()
    {

        this->data = data;
        this->next = next;
        this->prev = prev;
    }

    node(int data)
    {

        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    node(int data, node *next, node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};

node *reverse(node *num1)
{
node*head=num1;

    if (head == NULL || head->next == NULL)
    {

        return head;
    }


node*newhead= reverse(head->next);
node*front= head->next;
front->next=head;

head->next=NULL;
return newhead;



}



bool palindrone(node *head)
{

    node *slow = head;
    node *fast = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;
    }

node *newhead= reverse(slow->next);

node*first= head;
node*second= newhead;

while (second!=NULL){

    if (first->data!= second->data){


        reverse(newhead);
        return false;

    }

    first= first->next;
    second= second->next;


}

reverse(newhead);
return true;


}

int main()
{
    // Example usage:
    node *num1 = new node(2);
    num1->next = new node(4);
    num1->next->next = new node(3);
    num1->next->next->next = new node(4);
    num1->next->next->next->next = new node(2);

    if (palindrone(num1))
    {
        cout << "The linked list is a palindrome." << endl;
    }
    else
    {
        cout << "The linked list is not a palindrome." << endl;
    }
}