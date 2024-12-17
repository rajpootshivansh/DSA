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

int findlenth(node *slow, node *fast)
{
    int count = 1;
    fast = fast->next;
    while (slow!=fast){

        count++;
        fast=fast->next;

    }
    return count;

}
int detectcycle(node *head)
{

    node *slow = head;

    node *fast = head;
    

    while (fast != NULL && fast->next != NULL)
    {
        /* code */

        slow = slow->next;
        fast = fast->next->next;
       

        if (fast == slow)
        {
            return findlenth(slow,fast);
        }
      
    }

    return 0;
}

int main()
{
    // Creating the linked list
    node *head = new node(1);
    node *temp = head;

    // Adding elements 2, 3, 4, 5, 6, 7, 8
    for (int i = 2; i <= 8; ++i)
    {
        temp->next = new node(i);
        temp = temp->next;
    }

    // Creating a cycle: Connecting the last node to the third node
    temp->next = head->next->next; // Pointing 8 -> 3

    // Testing the detectcycle function
    int cycle_length = detectcycle(head);

    if (cycle_length > 0)
    {
        cout << "Cycle detected with length: " << cycle_length << endl;
    }
    else
    {
        cout << "No cycle detected in the linked list." << endl;
    }

    return 0;
}