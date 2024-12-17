#include <iostream>
using namespace std;
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

node *reversedll(node *head)
{

    if (head == NULL || head->next == NULL)
    {

        return head;
    }

    node *prev = NULL;
    node *current = head;
    while (current != NULL)
    {

        prev = current->prev;

        current->prev = current->next;
        current->next = prev;


        current = current->prev;
    }

    return prev->prev;
}



int main(){
    node *head = new node(1);
    head->next = new node(2);
    head->next->prev = head;
    head->next->next = new node(3);
    head->next->next->prev = head->next;
    head = reversedll(head);

    // Print reversed list
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
