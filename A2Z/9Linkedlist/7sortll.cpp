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

// node *sort(node *head)
// {

//     node *temp = head;
//     int cnt0 = 0;
//     int cnt1 = 0;
//     int cnt2 = 0;

//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//             cnt0++;
//         else if (temp->data == 1)
//             cnt1++;
//         else
//             cnt2++;
//         temp = temp->next;
//     }

//     // node*temp=head;
//     temp = head;

//     while (temp != NULL)
//     {

//         if (cnt0)
//         {
//             temp->data = 0;
//             cnt0--;
//         }

//         else if (cnt1)
//         {
//             temp->data = 1;
//             cnt1--;
//         }

//         else
//         {
//             temp->data = 2;
//             cnt2--;
//         }
//         temp = temp->next;
//     }
//     return head;

// }

node *sortlist( node *head){
if (!head||  !head->next)
{
       return head;



}



node* zerohead=new node(-1);
node* onehead=new node(-1);
node* twohead=new node(-1);

node*zero= zerohead;
node*one= onehead;
node*two= twohead;
node*temp=head;
while (temp)
{
    if(temp->data==0){
        zero->next=temp;
        zero=zero->next;

    }

    else if (temp->data==1){
        one->next=temp;
        one=one->next;

    }


    else 

    {two->next=temp;

    two=two->next;
}
temp=temp->next;



}

zero->next=(onehead->next) ? (onehead->next): (twohead->next);
one->next=twohead->next;
two->next=NULL;


node*newhead = zerohead->next;

delete zerohead;
delete onehead;
delete twohead;
return newhead;


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

// Main function
int main()
{
    // Create linked list: 1 -> 2 -> 0 -> 1 -> 2 -> 0 -> 1
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(0);
    head->next->next->next = new node(1);
    head->next->next->next->next = new node(2);
    head->next->next->next->next->next = new node(0);
    head->next->next->next->next->next->next = new node(1);

    cout << "Original List: ";
    printList(head);

    // Sort the list
    // head = sort(head);
    head = sortlist(head);

    cout << "Sorted List: ";
    printList(head);

    return 0;
}