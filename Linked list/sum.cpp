#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node *head = nullptr;

Node *create()
{
    return NULL;
}

void display(Node *p)
{
    while(p)
    {
        cout<<p->data<<"->"<<" ";
        p = p->next;
    }
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

int sum(Node *p)
{
    int s=0;
    
    while(p)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}

int rsum(Node *p)
{
    if(p==0)
    return 0;
    else
    return rsum(p->next)+p->data;
}

int max(Node *p)
{
    int max = INT_MIN;

    while(p)
    {
        if(p->data>max)
        max = p->data;
        else
        p=p->next;
    }
    return max;
}

int rmax(Node *p)
{
    int max=0;
    if(p==0)
    return INT_MIN;
    else
    {
    max = rmax(p->next);
    if(p->data>max)
    return p->data;
    else
    return max; }  
}

int Lsearch(Node *p, int key)
{
    while(p)
    {
        if(key == p->data)
            return p->data;
        p = p->next;
    }
    return 0;
}


int RLsearch(Node *p, int key)
{
    if(p==0)
    return 0;
    else if(key==p->data)
    return p->data;
    else
    return RLsearch(p->next,key);
}

void insert(Node *&head, int index, int x)
{
    Node *t, *p;

    if(index<0 || index>count(head))
    return ;

    else if(index==0)
    {
        t = new Node;
        t->data = x;
        t->next = head;
        head = t;
    }

    else if(index>0)
    {
        p = head;

        for(int i=0;i<index-1 && p;i++)
        {p = p->next;}
        if(p)
        t = new Node;
        t->data = x;
        t->next = p->next;
        p->next = t; 
    }
}

void sortinsert(Node *&head, int x)
{
    Node *t,*p, *q;
    q = NULL;
    p=head;
    t = new Node;
    t->data = x;
    t->next = NULL;

    if(head == NULL)
    {
        head = t;
    }
    else
    {
        while(p && p->data<x )
        {
            q=p;
            p = p->next;
        }
        if(p==head)
        {
            t->next = head;
            head = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}



int deletenode(int index)
{
    Node *p,*q;
    int x=-1;

    if(index<0 || index>count(head))
    {
        return -1;
    }

    if(index==0)
    {
        x=head->data;
        p = head;
        head = head->next;
        delete p;
    }

    else
    {
        p=head;
        q=NULL;

        for(int i=0;i<index-1 && p; i++)
        {
           q=p;
           p=p->next;
        }
        if(p)
        {
            q->next = p->next;
            x = p->data;
            delete p;
        }

    }
    return x;
}

int isSorted(Node *p)
{
    int x = INT_MIN;
    while(p)
    {
        if(p->data <x)
        return 0;

        else
        x=p->data;
        p=p->next;
    }
    return 1;
}

void removeDuplicate(Node *p)
{
    Node *q = p->next;

    while(q)
    {
        if(q->data != p->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q=p->next;
        }
    }
}

void reverse(Node *p)
{
    Node *r=NULL, *q=NULL;

   while(p)
   {
       r=q;
       q=p;
       p=p->next;
       q->next=r;
   }
   q=head;
}
void concat(Node *p, Node *q)
{
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next = q;
}

int isLoop(Node *f)
{
    Node *p,*q;
    p=q=f;

    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    } while (p && q && p!=q);
    
    if(p==q)
    return 1;
    else
    return 0;
}

int main()
{
    Node *head1 = create();
    Node *head2 = create();
    Node *head3 = create();

    sortinsert(head1, 10);
    sortinsert(head1, 20);
    sortinsert(head1, 30);
    sortinsert(head1, 40);
    sortinsert(head1, 50);
    sortinsert(head1, 60);

    display(head1);

    cout<<endl;
    sortinsert(head2, 0);
    sortinsert(head2, 1);
    sortinsert(head2, 2);
    sortinsert(head2, 3);
    sortinsert(head2, 4);
    sortinsert(head2, 5);
    
    display(head2);

    cout<<"Sum of all nodes:"<<sum(head1)<<endl;
    cout<<"Recursive function= "<<rsum(head1)<<endl;

    cout<<"Maximum element is= "<<max(head1)<<endl;
    cout<<"Recursive function= "<<rmax(head1)<<endl;

    cout<<"Searching for value= "<<Lsearch(head1, 9)<<endl;
    cout<<"Recursive search= "<<RLsearch(head1, 9)<<endl;

    cout<<"Deleting... "<<deletenode(2)<<endl;

    
    display(head1);

    if(isSorted(head1))
    cout<<"Sorted"<<endl;

    else
    cout<<"Not sorted"<<endl;

    removeDuplicate(head1);
    display(head1);
    cout<<endl;

    concat(head1,head2);
    display(head1);
    cout<<endl;
 
    sortinsert(head3, 10);
    sortinsert(head3, 20);
    sortinsert(head3, 30);
    sortinsert(head3, 40);
    sortinsert(head3, 50);

    Node *t1, *t2;
    t1 = head3->next->next;
    t2 = head3->next->next->next->next;
    t2->next=t1;

    cout<<isLoop(head3)<<endl;
    return 0;
}