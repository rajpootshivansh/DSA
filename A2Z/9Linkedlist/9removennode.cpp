#include <iostream>
#include <stack>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x) : data(x), next(NULL) {}
};

node *removennode(node *head, int N)
{

    int count = 0;
    node *temp = head;

    while (temp != NULL)
    {

        count++;
        temp = temp->next;
    }
    if (count == N)
    {
        node *newhead = head->next;
        free(head);
        return newhead;
    }

    int res = (count - N);

    temp = head;

    while (res>1)
    {

        temp = temp->next;
        res--;
        
        }



            node *deletenode = temp->next;
            temp->next = temp->next->next;
           delete deletenode;

            return head;
            // break;
        }
    



    void print(node * head)
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }




node*removenthnode(node*head,int N){
    node*fast=head;
    node*slow=head;


    for (int i = 0; i < N; i++)
    {
        /* code */


        fast=fast->next;

    }


    if(fast==NULL) return head->next;


    while(fast->next!=NULL){
        fast=fast->next;

        slow=slow->next;

    }

    node*delnode=slow->next;
    slow->next= slow->next->next;
    free(delnode);
    return head;


    
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
        print(head);

        // after remove

        head = removenthnode(head, 2);
        // head = removennode(head, 2);
        print(head);
    }   
