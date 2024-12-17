#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

public:
    node(int data1, node *next1= nullptr)
    {

        data = data1;
        next =next1;
    }

// public:
//     node(int data1)
//     {
//         data = data1;
//         next = nullptr;
//     }
};

node *convertarr2ll(vector<int> &arr)
{
    if (arr.empty())
        return nullptr;
    node *head = new node{arr[0]};
    node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node{arr[i]};

        mover->next = temp;
        mover = temp;
    }
    return head;
}
void print(node *head)
{

    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *removeshead(node *head)
{
    if (head == NULL)
        return head;

    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

node *removetail(node *head)
{

    if (head == NULL || head->next == NULL)
        return NULL;

    node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;

    temp->next = nullptr;

    return head;
}

node *deletek(node *head, int k)
{

    if (head == NULL)
        return head;
    if (k == 1)
    {

        node *temp = head;
        head = head->next;

        free(temp);
        return head;
    }

    int count = 0;
    node *temp = head;
    node *prev = NULL;

    while (temp != NULL)
    {
        count++;

        if (count == k)
        {

            prev->next = prev->next->next;

            free(temp);
            break;
        }

        prev = temp;

        temp = temp->next;
    }

    return head;
}
node *deleteele(node *head, int ele)
{

    if (head == NULL)
        return head;
    if (head->data == ele)
    {

        node *temp = head;
        head = head->next;

        free(temp);
        return head;
    }

    int count = 0;
    node *temp = head;
    node *prev = NULL;

    while (temp != NULL)
    {

        if (temp->data == ele)
        {

            prev->next = prev->next->next;

            free(temp);
            break;
        }

        prev = temp;

        temp = temp->next;
    }

    return head;
}

node *inserthead(node *head, int val)
{

    return new node(val, head);
}
node *inserttail(node *head, int val)
{

    if (head == NULL)
    {

        return new node(val);
    }

    node *temp = head;
    while (temp->next != NULL)
    {

        temp = temp->next;
    }

    node *newnode = new node(val);
    temp->next = newnode;
    return head;

   
}

node *insertposition(node *head, int ele, int k)
{

    if (head == NULL)
    {

        if (k == 1)
        {

            return new node(ele);
        }

        else
        {
            return head;
        }
    }

    // if (k == 1)
    // {

    //     return new node(ele, head);
    // }

    int count = 0;

    node *temp = head;

    while (temp != NULL)
    {
        count++;

        if (count == (k - 1))
        {

            node *x = new node(ele, temp->next);
            temp->next = x;

            break;
        }

        temp = temp->next;
    }
    return head;
}
node *insertbeforevalue(node *head, int ele, int value)
{

    if (head == NULL)
    {
return NULL;
    }
    if (head->data==value)
    {

        return new node(ele, head);
    }

    

    node *temp = head;

    while (temp->next != NULL)
    {
        

        if (temp->next->data==value)
        {

            node *x = new node(ele, temp->next);
            temp->next = x;

            break;
        }

        temp = temp->next;
    }
    return head;
}

int main()
{

    vector<int> arr = {22, 5, 8, 89, 7};

    node *head = convertarr2ll(arr);
    // head = removeshead(head);
    // head = removetail(head);
    // head = deletek(head,3);
    //  head = deleteele(head,8);
    //  head = inserttail(head,564);
    // head = inserthead(head, 564);



    head = insertposition(head, 100, 2);
    // head = insertbeforevalue(head, 100,89);
    print(head);

   
}
