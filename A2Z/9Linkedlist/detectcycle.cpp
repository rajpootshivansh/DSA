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

bool detectcycle(node *head)
{

    node *slow = head;

    node *fast = head;
    int count = 0;

    while (fast != NULL && fast->next != NULL)
    {
        /* code */

        slow = slow->next;
        fast = fast->next->next;
        count+=1;

        if (fast == slow)
        {
            return true;
        }
        cout << count;
    }
            
    return false;
}

int main()
{
    // Creating the linked list
    node *head = new node(1);
    node *temp = head;

    // Adding elements 2, 3, 4, 5, 6, 7
    for (int i = 2; i <= 8; ++i)
    {
        temp->next = new node(i);
        temp = temp->next;
    }

    // Creating a cycle: Connecting the last node to the third node
    temp->next = head->next->next; // Pointing 7 -> 3

    // Testing the detectcycle function
    if (detectcycle(head))
    {
        cout << "Cycle detected in the linked list." << endl;
    }
    else
    {
        cout << "No cycle detected in the linked list." << endl;
    }

    return 0;
}
//   ohn-D12-56q-EKF