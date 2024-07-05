#include<iostream>
using namespace std;

class Node {
public:
    Node* lchild;
    int data;
    Node* rchild;
};

class Queue {
private:
    int size;
    int front;
    int rear;
    Node** Q;  // [Node*]*: Pointer to [Pointer to Node]
public:
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(Node* x);
    Node* dequeue();
};
 
Queue::Queue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new Node*[size];
}
 
Queue::~Queue() {
    delete[] Q;
}
 
bool Queue::isEmpty() {
    return front == rear;
}
 
bool Queue::isFull() {
    return rear == size - 1;
}
 
void Queue::enqueue(Node* x) {
    if (isFull()) {
        cout << "Queue Overflow" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}
 
Node* Queue::dequeue() {
    Node* x = nullptr;
    if (isEmpty()) {
        cout << "Queue Underflow" << endl;
    } else {
        front++;
        x = Q[front];
    }
    return x;
}

void createtree(Node*& root) {
    root = new Node;
    Node* p;
    Node* t;
    int x;
    Queue q(10);
    cout << "Enter root value: ";
    cin >> x;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while (!q.isEmpty()) {
        p = q.dequeue();

        cout << "Enter left child of " << p->data << " (-1 for no child): ";
        cin >> x;
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }

        cout << "Enter right child of " << p->data << " (-1 for no child): ";
        cin >> x;
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void preorder(Node* p) {
    if (p) {
        cout << p->data << " ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void inorder(Node* p) {
    if (p) {
        inorder(p->lchild);
        cout << p->data << " ";
        inorder(p->rchild);
    }
}

void postorder(Node* p) {
    if (p) {
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data << " ";
    }
}

int main() {
    Node* root = NULL;
    createtree(root);
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    return 0;
}
