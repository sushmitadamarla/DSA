#include <iostream>
#include <cmath> // For pow function

using namespace std;

// Node class representing each term in the polynomial
class Node
{
public:
    int coeff;
    int exp;
    Node *next;

    Node(int c, int e) : coeff(c), exp(e), next(nullptr) {}
};

// Polynomial class managing the linked list of nodes
class Polynomial
{
private:
    Node *poly; // Head of the polynomial linked list

public:
    Polynomial() : poly(nullptr) {}

    // Destructor to free allocated memory
    ~Polynomial()
    {
        Node *temp;
        while (poly != nullptr)
        {
            temp = poly;
            poly = poly->next;
            delete temp;
        }
    }

    // Function to create the polynomial from user input
    void create()
    {
        Node *t, *last = nullptr;
        int num, coeff, exp;

        cout << "Enter number of terms: ";
        cin >> num;
        cout << "Enter each term with coeff and exp:" << endl;

        for (int i = 0; i < num; i++)
        {
            cout << "Term " << i + 1 << ": ";
            cin >> coeff >> exp;
            t = new Node(coeff, exp);
            if (poly == nullptr)
            {
                poly = last = t;
            }
            else
            {
                last->next = t;
                last = t;
            }
        }
    }

    // Function to display the polynomial
    void display()
    {
        Node *p = poly;
        cout << "Polynomial: ";
        while (p != nullptr)
        {
            cout << p->coeff << "x^" << p->exp;
            if (p->next != nullptr)
                cout << " + ";
            p = p->next;
        }
        cout << endl;
    }

    // Function to evaluate the polynomial for a given value of x
    long evaluate(int x)
    {
        long val = 0;
        Node *p = poly;

        while (p != nullptr)
        {
            val += p->coeff * pow(x, p->exp);
            p = p->next;
        }

        return val;
    }
};

int main()
{
    Polynomial p;

    p.create();
    p.display();
    
    int x;
    cout << "Enter the value of x for evaluation: ";
    cin >> x;
    cout << "Result of polynomial evaluation at x=" << x << ": " << p.evaluate(x) << endl;

    return 0;
}
