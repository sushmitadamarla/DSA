#include<iostream>
using namespace std;

class Node
{
    public:
    Node *prev;
    int data;
    Node *next;
};

class doublyll
{
    private:
    Node *head;

    public:
    doublyll()
    {
        head = NULL;
    }

    Node *create(int A[], int n)
    {
        Node *t, *last;
        int i;

        Node *first = new Node;
        first->data = A[0];
        first->prev=first->next = NULL;
        last = first;

        for(i=1;i<n;i++)
        {
            t = new Node;
            t->data = A[i];
            t->next = NULL;
            t->prev = last;
            last->next = t;
            last = t;
        }
        return first;
    }

    void display(Node *p)
    {
        while(p)
        {
            cout<<p->data<<"->"<<" ";
            p = p->next;
        }
    } 

    int length(Node *p)
    {
        int len = 0;

        while(p)
        {
            len++;
            p = p->next;
        }
        return len;
    }

    void insert(Node *&head, int index, int x)
    {
        Node *t,*p;
        p = head;
        int i;

        if(index<0 || index>length(head))
        {
            return;
        }

        if(index == 0)
        {
            t = new Node;
            t->data = x;
            t->prev = NULL;
            t->next= head;
            head->prev = t;
            head = t;
        }

        else
        {
            for(i=0;i<index-1;i++)
            {
                p = p->next;
            }

            t = new Node;
            t->data = x;

            t->prev = p;
            t->next = p->next;
            if(p->next)
            p->next->prev = t;
            p->next = t;
        }
    }

    int del(Node *&head, int index)
    {
        int x = -1;
        Node *p, *q;
        p = head;
        if(index<0 || index>length(head))
        {return -1;}

        if(index == 0)
        {
           x = p->data;
           head = head->next;
           if(head)
           head->prev = NULL;
           delete(p);
        }
        else
        {
            for(int i=0;i<index;i++)
            {
                p = p->next;
            }
            x = p->data;
            p->prev->next = p->next;
            if(p->next)
            p->next->prev = p->prev;

                delete(p);
        }
        return x;
    }

    void reverse(Node *&head)
    {
        Node *p,*temp = NULL;
        p = head;

        while(p!=NULL)
        {
            temp = p->prev;
            p->prev = p->next;
            p->next = temp;
            p = p->prev;
            if(p!=NULL && p->next != NULL)
            head = p;
        }

        if(temp!=NULL)
        head = temp->prev;
    }

    void midelement(Node *&head)
    {
        Node *p,*q;
        p = q = head;

        while(q && q->next)
        {
            q = q->next->next;
            p = p->next;
        }

        if(p!=NULL)
        cout<<"Middle element = "<<p->data<<endl;
    }
};

int main()
{
    doublyll db;
    int A[] = {2,4,5,6,8,3};
    Node *head = db.create(A, 6);

    db.display(head);
    cout<<endl;

    db.insert(head, 3, 12);
    db.display(head);
    cout<<endl;

    db.del(head, 3);
    db.display(head);
    cout<<endl;

    db.reverse(head);
    db.display(head);
    cout<<endl;

    db.midelement(head);
}