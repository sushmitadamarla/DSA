#include<iostream>
using namespace std;

class Node
{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};

class BST
{
    private:
    Node *root;

    public:
    BST()
    {root = NULL;}

    Node *getroot()
    {
        return root;
    }

    void insert(int key)
    {
        Node *t = root;
        Node *p, *r;

        if(root == NULL)
        {
            p = new Node;
            p->data = key;
            p->lchild = p->rchild = NULL;
            root = p;
            return;
        }

        while(t != NULL)
        {
            r = t;
            if(key < t->data)
            {t = t->lchild;}
            else if(key>t->data)
            {t = t->rchild;}
            else
            return;
        }

        p = new Node;
        p->data = key;
        p->lchild = p->rchild = NULL;

        if(key< r->data)
        {r->lchild = p;}
        else
        {r->rchild = p;}
    }

    void inorder(Node* p) {
    if (p) {
        inorder(p->lchild);
        cout << p->data << " ";
        inorder(p->rchild);
    }
}

    Node *search(int key)
    {
        Node *t = root;
        while(t != NULL)
        {
            if(key == t->data)
            {return t;}
            else if(key< t->data)
            {t = t->lchild;}
            else
            {t = t->rchild;}
        }
        return NULL;
    }

    Node* rInsert(Node *p, int key) {
    Node* t;
    if (p == nullptr){
        t = new Node;
        t->data = key;
        t->lchild = nullptr;
        t->rchild = nullptr;
        return t;
    }
 
    if (key < p->data){
        p->lchild = rInsert(p->lchild, key);
    } else if (key > p->data){
        p->rchild = rInsert(p->rchild, key);
    }
    return p;  // key == p->data?
}
 
Node* rSearch(Node *p, int key) {
    if (p == nullptr){
        return nullptr;
    }
 
    if (key == p->data){
        return p;
    } else if (key < p->data){
        return rSearch(p->lchild, key);
    } else {
        return rSearch(p->rchild, key);
    }
}
 
Node* Delete(Node *p, int key) {
    Node* q;
 
    if (p == nullptr){
        return nullptr;
    }
 
    if (p->lchild == nullptr && p->rchild == nullptr){
        if (p == root){
            root = nullptr;
        }
        delete p;
        return nullptr;
    }
 
    if (key < p->data){
        p->lchild = Delete(p->lchild, key);
    } else if (key > p->data){
        p->rchild = Delete(p->rchild, key);
    } else {
        if (Height(p->lchild) > Height(p->rchild)){
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        } else {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
}

    int Height(Node *p) {
    int x;
    int y;
    if (p == nullptr){
        return 0;
    }
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x > y ? x + 1 : y + 1;
}
 
Node* InPre(Node *p) {
    while (p && p->rchild != nullptr){
        p = p->rchild;
    }
    return p;
}
 
Node* InSucc(Node *p) {
    while (p && p->lchild != nullptr){
        p = p->lchild;
    }
    return p;
}
};

int main()
{
    BST bst;

    bst.insert(10);
    bst.insert(5);
    bst.insert(20);
    bst.insert(8);
    bst.insert(30);

    bst.inorder(bst.getroot());
    cout<<endl;

    Node *temp = bst.search(2);
    if(temp != NULL)
    {
        cout<<temp->data<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }

    Node* temp = bst.search(2);
    if (temp != nullptr){
        cout << temp->data << endl;
    } else {
        cout << "Element not found" << endl;
    }
 
    // Recursive search
    temp = bst.rSearch(bst.getroot(), 20);
    if (temp != nullptr){
        cout << temp->data << endl;
    } else {
        cout << "Element not found" << endl;
    }
 
    // Recursive insert
    bst.rInsert(bst.getroot(), 50);
    bst.rInsert(bst.getroot(), 70);
    bst.rInsert(bst.getroot(), 1);
    bst.inorder(bst.getroot());
    cout << "\n" << endl;
 
    // Inorder predecessor and inorder successor
    BST bs;
    bs.insert(5);
    bs.insert(2);
    bs.insert(8);
    bs.insert(7);
    bs.insert(9);
    bs.insert(1);
 
    temp = bs.InPre(bs.getroot());
    cout << "InPre: " << temp->data << endl;
 
    temp = bs.InSucc(bs.getroot());
    cout << "InSucc: " << temp->data << endl;
 
    bs.inorder(bs.getroot());
    cout << endl;
 
    // Delete
    bs.Delete(bs.getroot(), 7);
    bs.inorder(bs.getroot());
    
    return 0;

}