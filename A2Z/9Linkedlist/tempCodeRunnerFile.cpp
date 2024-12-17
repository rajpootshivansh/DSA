#include <bits/stdc++.h>
#include <stack>

using namespace std;
struct node
{
    int data;
    node *next;
    node(int x) : data(x), next(NULL) {}
};

// node *reverselist(node *head)
// {

//     node *temp = head;
//     node *prev = NULL;

//     while (temp != NULL)
//     {

//         node *front = temp->next;
//         temp->next = prev;
//         prev = temp;
//         temp = front;
//     }

//     return prev;
// }

//node *add1(node *head)
// {

//     head = reverselist(head);

//     node *temp = head;

//     while (temp != NULL)
//     {

//         int carry = 1;

//         if (temp->data < 10)
//         {

//             carry = 0;
//             break;
//         }

//         else
//         {

//             temp->data == 0;
//             carry = 1;
//         }

//         temp = temp->next;

//         if (carry == 1)
//         {

//             node*newnode=new node(1);
//             head=reverselist(head);
//             newnode->next=head;
//             return newnode;

//         }

//         head = reverselist(head);

//         return head;
//     }



// }

int addhelper(node*temp){

    if(temp==NULL){
        return 1;

    }

    int carry =addhelper(temp->next);
    temp->data+=carry;
    if(temp->data<10) return 0;
    temp->data=0;
    return 1;

}
node*add1(node*head){
int carry= addhelper(head);
if(carry==1){
    node*newnode= new node(1);
    newnode->next=head;
    head=newnode;
}
    return head;


}
    void printList(node * head)
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
        node *head = new node(9);
        head->next = new node(9);
        head->next->next = new node(8);

        head = add1(head);

        printList(head);
    }