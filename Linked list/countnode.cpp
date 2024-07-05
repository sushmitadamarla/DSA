#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node* create(int A[], int n)
{
    Node *head = new Node;
    Node *temp;
    Node *last;

    head->data=A[0];
    head->next=nullptr;
    last=head;

    for(int i=1;i<n;i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
        
        last->next = temp;
        last = temp;
    }
    return head;
}

int count(Node *p)
{
    int l=0;
    while(p)
    {
        l++;
        p = p->next;
    }
    return l;
}

int rcount(Node *p)
{
    if(p==0)
    return 0;
    else
    return 1+rcount(p->next);
}

int main()
{
    int A[] = {3,5,7,10,12};
    Node *head = create(A,5);

    cout<<"Count of nodes is:"<< count(head)<<endl;
    cout<<"Recursive count:"<<rcount(head)<<endl;
    return 0;

} 