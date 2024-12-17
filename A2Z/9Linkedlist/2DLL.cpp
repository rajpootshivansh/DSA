#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *back;

    // Constructor with parameters
    node(int data1, node *next1 = nullptr, node *back1 = nullptr)
    {
        data = data1;
        next = next1;
        back = back1;
    }
};

// Function to print the doubly linked list
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to convert array to doubly linked list
node *convertarr2dll(vector<int> &arr)
{
    if (arr.empty())
        return nullptr;

    node *head = new node(arr[0]); // Create the first node
    node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp; // Link the previous node with the current node
        prev = temp;       // Move to the next node
    }

    return head;
}

// Function to delete the head of the doubly linked list
node *deletehead(node *head)
{
    if (head == nullptr || head->next == nullptr)
        return nullptr;

    node *temp = head;
    head = head->next;
    head->back = nullptr;
    delete temp;

    return head;
}

node *deletetail(node *head)
{

    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    node *tail = head;

    while (tail->next != nullptr)
    {

        tail = tail->next;
    }

    node *newtail = tail->back;

    newtail->next = nullptr;

    tail->back = nullptr;
    delete tail;
    return head;
}

node *removekthelement(node *head, int k)
{

    if (head == NULL)
    {

        return NULL;
    }

    int count = 0;
    node *knode = head;

    while (knode != NULL)
    {

        count++;
        if (count == k)
        {
            break;
        }
        knode = knode->next;
    }

    node *prev = knode->back;
    node *front = knode->next;

    if (prev == NULL && front == NULL)
    {
        return NULL;
    }

    else if (prev == NULL)
    {
        return deletehead(head);
    }
    else if (front == NULL)
    {
        return deletetail(head);
    }

    prev->next = front;
    front->back = prev;

    knode->next = nullptr;
    knode->back = nullptr;

    delete knode;
    return head;
}

void deletenode(node *temp)
{

    node *prev = temp->back;
    node *front = temp->next;

    if (front == NULL)
    {
        prev->next = nullptr;
        front->back = nullptr;

        free(temp);

        return;
    }

    prev->next = front;
    front->back = prev;

    temp->next = temp->back = nullptr;
    free(temp);
}


node*insertbeforehead(node*head,int val)
{

    node*newhead = new node(val,head,nullptr);


    head->back=newhead;
      
return newhead;



}



node*insertbeforetail(node*head,int val){
    if(head->next==nullptr){

        return insertbeforehead(head,val);
    }

node*tail=head;
while(tail->next!=nullptr){


    tail=tail->next;







}


node*prev= tail->back;

node*newnode= new node(val,tail,prev);

prev->next=newnode;
tail->back=newnode;

return head;

}


node* insertbeforekthelement(node*head, int k, int val){

if(k==1){
    return insertbeforehead(head,val);
}


node*temp= head;

int count=0;
while(temp!= NULL){
count++;
if(count==k){
    break;
}

temp= temp->next;

}

node*prev= temp->back;
node*newnode=new node(val,temp,prev);

prev->next= newnode;
temp->back= newnode;

return head;


}


void insertbeforenode(node*node, int val){
    node*prev= node->back;
    node*newnode= new node(val,node,prev);
    prev->next= newnode;
    node->back= newnode;

}


int main()
{
    vector<int> arr = {12, 5, 8, 7, 9};
    node *head = convertarr2dll(arr);

    // head = deletehead(head);
    // head = deletetail(head);
    // head = removekthelement(head, 4);
    // head = insertbeforehead(head, 4);
    //head = insertbeforetail(head, 4);
  //  head = insertbeforekthelement(head, 4,10);
    head = insertbeforenode(head->next->next, 46);

     // deletenode(head->next);

    print(head);

    return 0;
}


