#include <iostream>
#include <stack>
#include <map>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x) : data(x), next(NULL) {}
};

// node *intersectiony(node *head1,node*head2)
// {
// node*temp=head1;

// map<node*,int>mpp;

// while(temp!=NULL){
//     mpp[temp]=1;
//     temp= temp->next;

// }

// temp=head2;

// while (temp!=NULL){

//     if (mpp.find(temp)!=mpp.end())
//     return temp;
//     temp=temp->next;

// }
// return NULL;

// }

node *collisionpoint(node *temp1, node *temp2, int d)
{

    while (d)
    {
        d--;

        temp2 = temp2->next;
    }

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1 == temp2)
            return temp1;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return NULL;
}



node *intersectiony(node *head1, node *head2)
{

    node *temp1 = head1;
    int n1, n2 = 0;

    node *temp2 = head2;

    while (temp1 != NULL)
    {
        n1++;
        temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {

        n2++;
        temp2 = temp2->next;
    }



     temp1 = head1;
    temp2 = head2;

    if (n1 > n2)
    {
        return collisionpoint(head1, head2, n2 - n1);
    }
    else
    {
        return collisionpoint(head2, head1, n1 - n2);
    }
}

int main()
{
    // Example usage
    node *head1 = new node(1);
    head1->next = new node(2);
    head1->next->next = new node(3);
    head1->next->next->next = new node(4);

    node *head2 = new node(10);
    head2->next = head1->next->next; // Intersect at node with data 3

    node *intersection = intersectiony(head1, head2);
    if (intersection != NULL)
    {
        cout << "Intersection point data: " << intersection->data << endl;
    }
    else
    {
        cout << "No intersection point found" << endl;
    }

    return 0;
}