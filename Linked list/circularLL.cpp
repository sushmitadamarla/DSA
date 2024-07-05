#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class circularll
{
    private:
    Node *head;

    public:
    circularll()
    {
        head = NULL;
    }

    Node *create(int A[], int n)
{
    int i;
    Node *t, *last;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;

    for(int i=1;i<n;i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
    return head;
}

void display(Node *head)
{
    Node *h = new Node;
    h = head;
    do
    {
        cout<<h->data<<"->"<<" ";
        h = h->next;
    } while (h!=head);
    cout<<"head"<<endl;
}

int length(Node *p)
{
    int len;
    do
    {
        len++;
        p = p->next;
    } while (p!=head);
    return len;
}

void insert(Node*& head, int index, int x) {
    if (index < 0 || index > length(head)) {
        return;
    }

    Node* t = new Node;
    t->data = x;

    if (index == 0) {
        if (head == nullptr) {
            head = t;
            head->next = head;
        } else {
            Node* p = head;
            while (p->next != head) {
                p = p->next;
            }
            t->next = head;
            p->next = t;
            head = t;
        }
    } else {
        Node* p = head;
        for (int i = 0; i < index - 1; i++) {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}


int del(Node *p,int index)
{
    Node *q = new Node;
    int x;

    if(index<0 ||index>length(head))
    return -1;

    if(index == 1)
    {
        while(p->next!=head)
        p = p->next;

        if(head == p)
        {
            delete head;
            head = NULL;
        }
        else
        {
            p->next = head->next;
            delete head;
            head = p->next;
        }
    }
    else
    {
        for(int i=0;i<index-2;i++)
        p = p->next;

        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
    return x;
}
};

int main()
{
    circularll c;

    int A[] = {2,4,5,6,8};
    Node *head = c.create(A, 5);

    c.display(head);

    c.insert(head, 3, 12);
    c.display(head);

    c.del(head, 4);
    c.display(head);
}
