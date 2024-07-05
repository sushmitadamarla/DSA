#include<iostream>
using namespace std;

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

void BFS(int G[][7], int start, int n)
{
    int i = start;
    QueueLL q;
    int visited[7] = {0};

    cout<<i<<endl;
    visited[i] = 1;
    q.enqueue(i);

    while(!q.isEmpty())
    {
        i = q.dequeue();
        for(int j=1;j<n;j++)
        {
            if(G[i][j] == 1 && visited[j] == 0)
            {
                cout<<j<<endl;
                visited[j] = 1;
                q.enqueue(j);
            }
        }
    }
}

void DFS(int G[][7],int start,int n)
{
static int visited[7]={0};
int j;
if(visited[start]==0)
{
printf("%d ",start);
visited[start]=1;
for(j=1;j<n;j++)
{
if(G[start][j]==1 && visited[j]==0)
DFS(G,j,n);
}
}
}

int main()
{
    int G[7][7] = {{0,0,0,0,0,0,0},
                   {0,0,1,1,0,0,0},
                   {0,1,0,0,1,0,0},
                   {0,1,0,0,1,0,0},
                   {0,0,1,1,0,1,1},
                   {0,0,0,0,1,0,0},
                   {0,0,0,0,1,0,0}};

                   BFS(G,5,7);

                    cout<<endl;
                   DFS(G,5,7);

                   return 0;
}