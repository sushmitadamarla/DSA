#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class QueueLL
{
    Node *front, *rear;

    public:
    QueueLL()
    {
        front = NULL;
        rear = NULL;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void enqueue(int x)
    {
        Node *t = new Node;
        if(t == NULL)
        {
            cout << "Queue overflow" << endl;
        }
        else
        {
            t->data = x;
            t->next = NULL; // Ensure the new node's next pointer is NULL
            if(front == NULL)
            {
                front = t;
                rear = t;
            }
            else
            {
                rear->next = t;
                rear = t;
            }
        }
    }

    int dequeue()
    {
        int x = -1;
        Node *p;
        if(isEmpty())
        {
            cout << "Queue underflow" << endl;
        }
        else
        {
            p = front;
            front = front->next;
            x = p->data;
            delete p;
        }
        return x;
    }

    ~QueueLL()
    {
        Node* p = front;
        while (front)
        {
            front = front->next;
            delete p;
            p = front;
        }
    }

    void display()
    {
        Node *p = front;
        while(p)
        {
            cout << p->data;
            p = p->next;
            if (p != nullptr)
            {
                cout << " -> ";
            }
        }
        cout << endl;
    }
};

int main() 
{
    int A[] = {1, 3, 5, 7, 9};
    QueueLL q;

    for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++)
    {
        q.enqueue(A[i]);
    }

    q.display();

    for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++)
    {
        q.dequeue();
    }

    q.dequeue(); // Additional dequeue to show underflow

    return 0;
}
