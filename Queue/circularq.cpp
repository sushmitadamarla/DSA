#include<iostream>
using namespace std;

class circularq
{
    private:
    int front;
    int rear;
    int size;
    int *Q;

    public:
    circularq(int size)
    {
        front = rear = 0;
        this->size = size+1;
        Q = new int[this->size];
    }

    ~circularq() {
    delete [] Q;
    }

    bool isEmpty()
    {
        if(front == rear)
        return true;
        else
        return false;
    }

    bool isFull()
    {
        if((rear+1)%size == front)
        return true;
        else
        return false;
    }

    void enqueue(int x)
    {
        if(isFull())
        cout<<"Queue Overflow"<<endl;
        else
        rear = (rear+1)%size;
        Q[rear] = x;
    }

    int dequeue()
    {
        int x = -1;

        if(isEmpty())
        cout<<"Queue Underflow"<<endl;
        else
        front = (front+1) % size;
        x = Q[front];

        return x;
    }

    void display()
    {
       if(isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        int i = front + 1;
        do
        {
            cout << Q[i] << " ";
            i = (i + 1) % size;
        } while(i != (rear + 1) % size);
        cout << endl;
    }
};

int main()
{
    circularq q(7);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();
}