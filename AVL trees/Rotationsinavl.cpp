#include<iostream>
using namespace std;

class Node {
public:
    Node *lchild;
    int data;
    Node *rchild;
    int height;
};

class AVL {
private:
    Node *root;

public: 
    AVL() { root = NULL; }

    int NodeHeight(Node *p) {
        int hl = p && p->lchild ? p->lchild->height : 0;
        int hr = p && p->rchild ? p->rchild->height : 0;
        return hl > hr ? hl + 1 : hr + 1;
    }

    int BalanceFactor(Node *p) {
        int hl = p && p->lchild ? p->lchild->height : 0;
        int hr = p && p->rchild ? p->rchild->height : 0;
        return hl - hr;
    }

    Node* LLrotation(Node *p) {
        Node *pl = p->lchild;
        Node *plr = pl->rchild;

        pl->rchild = p;
        p->lchild = plr;

        p->height = NodeHeight(p);
        pl->height = NodeHeight(pl);

        if (root == p) root = pl;
        return pl;
    }

    Node* LRrotation(Node *p) {
        Node *pl = p->lchild;
        Node *plr = pl->rchild;

        pl->rchild = plr->lchild;
        p->lchild = plr->rchild;

        plr->lchild = pl;
        plr->rchild = p;

        pl->height = NodeHeight(pl);
        p->height = NodeHeight(p);
        plr->height = NodeHeight(plr);

        if (root == p) root = plr;

        return plr;
    }

    Node* RRrotation(Node *p) {
        Node *pr = p->rchild;
        Node *prl = pr->lchild;

        pr->lchild = p;
        p->rchild = prl;

        p->height = NodeHeight(p);
        pr->height = NodeHeight(pr);

        if (root == p) root = pr;
        return pr;
    }

    Node* RLrotation(Node *p) {
        Node *pr = p->rchild;
        Node *prl = pr->lchild;

        pr->lchild = prl->rchild;
        p->rchild = prl->lchild;

        prl->rchild = pr;
        prl->lchild = p;

        pr->height = NodeHeight(pr);
        p->height = NodeHeight(p);
        prl->height = NodeHeight(prl);

        if (root == p) root = prl;

        return prl;
    }

    Node* rInsert(Node *p, int key) {
        if (p == nullptr) {
            Node *t = new Node;
            t->data = key;
            t->height = 1;
            t->lchild = nullptr;
            t->rchild = nullptr;
            return t;
        }

        if (key < p->data) {
            p->lchild = rInsert(p->lchild, key);
        } else if (key > p->data) {
            p->rchild = rInsert(p->rchild, key);
        }

        p->height = NodeHeight(p);

        if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1)
            return LLrotation(p);
        else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1)
            return LRrotation(p);
        else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1)
            return RRrotation(p);
        else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1)
            return RLrotation(p);

        return p;
    }

    void Insert(int key) {
        root = rInsert(root, key);
    }

    void PreOrder(Node *p) {
        if (p != nullptr) {
            cout << p->data << " ";
            PreOrder(p->lchild);
            PreOrder(p->rchild);
        }
    }

    void Display() {
        PreOrder(root);
        cout << endl;
    }
};

int main() {
    AVL avl;

    avl.Insert(10);
    avl.Insert(20);
    avl.Insert(30);
    avl.Insert(25);
    avl.Insert(28);
    avl.Insert(27);
    avl.Insert(5);

    avl.Display();

    return 0;
}