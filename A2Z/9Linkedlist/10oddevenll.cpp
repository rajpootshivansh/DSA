#include <bits/stdc++.h>
#include <stack>
#include <array>
using namespace std;

// brute

struct node
{
    int data;
    node *next;
    node(int x) : data(x), next(NULL) {}
};

node *oddeven(node *head)
{

    // std::vector<int> arr;
    // node *temp = head;

    // while (temp != NULL && temp->next != NULL)
    // {

    //     arr.push_back(temp->data);

    //     temp = temp->next->next;
    // }

    // if (temp)
    //     arr.push_back(temp->data);

    // temp = head->next;

    // while (temp != NULL && temp->next != NULL)
    // {

    //     arr.push_back(temp->data);

    //     temp = temp->next->next;
    // }

    // if (temp)
    //    { arr.push_back(temp->data);

    // return head;}

    // int i = 0;

    // temp = head;

    // while (temp != NULL)
    // {
    //     temp->data = arr[i];

    //     i++;

    //     temp = temp->next;
    // }

    node *odd = head;
    node *even = head->next;
    node *evenhead = head->next;

    while (even != NULL && even->next != NULL)
    {

        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next->next;
    }

    odd->next = evenhead;

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

    head = oddeven(head);

    printList(head);
}