#include<iostream>
using namespace std;

class Term
{
    public:
    int coeff;
    int exp;
};

class poly
{
    public:
    int n;
    Term *terms;

     poly()
    {
        n = 0;
        terms = nullptr;
    }

    // Destructor to free dynamically allocated memory
    ~poly()
    {
        delete[] terms;
    }

    void create()
{
    int i;
    cout<<"Enter no. of terms"<<endl;
    cin>>n;

    terms = new Term[n];

    cout<<"Enter terms"<<endl;

    for(i = 0;i<n;i++)
    {
        cin>>terms[i].coeff,terms[i].exp;
    }
}

void display()
{
    cout<<"Polynomial is:"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<terms[i].coeff<<"x^"<<terms[i].exp<<" ";
        if (i != n - 1)
        cout << " + ";
    }
    cout<<endl;
}

};

int main()
{
    poly p1;

    p1.create();
    p1.display();

    return 0;
}