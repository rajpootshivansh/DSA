#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x) : data(x), next(NULL) {}
};

node *addtwonumbers(node *num1, node *num2)
{

    node *dummyhead = new node(-1);
    node*curr= dummyhead;

    node *temp1 = num1;
    node *temp2 = num2;

    int carry = 0;

    while (temp1 != NULL || temp2 != NULL)
    {

        int sum = carry;

        if (temp1)
            sum += temp1->data;

        if (temp2)
            sum += temp2->data;

        node *newnode = new node(sum % 10);
        carry = sum / 10;

        curr->next = newnode;

        curr = curr-> next;

        if (temp1)
            temp1 = temp1->next;
        if (temp2)
            temp2 = temp2->next;
    }

    if (carry > 0)
    {
        curr->next = new node(carry);
    }

    return dummyhead->next;
}

int main()
{
    // Example usage:
    node *num1 = new node(2);
    num1->next = new node(4);
    num1->next->next = new node(3); // Number: 342

    node *num2 = new node(5);
    num2->next = new node(6);
    num2->next->next = new node(4); // Number: 465

    node *result = addtwonumbers(num1, num2); // Result should be 807 (7 -> 0 -> 8)

    // Print the result
    while (result != NULL)
    {
        cout << result->data;
        if (result->next != NULL)
            cout << "";
        result = result->next;
    }

    return 0;
}
