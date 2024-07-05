#include<iostream>
using namespace std;

class Element
{
    public:
    int i, j, x;
};

class Sparse
{
    int m, n, num;
    Element *ele;

    public:

    Sparse() : m(0), n(0), num(0), ele(nullptr) {}

    Sparse(int m, int n, int num) : m(m), n(n), num(num)
    {
        ele = new Element[num];
    } 

    ~Sparse()
    {
        delete[] ele;
    }

    void create()
    {
        cout<<"Enter non-zero values for row column and value"<<endl;
        for(int i=0;i<num;i++)
        {
            cin>>ele[i].i>>ele[i].j>>ele[i].x;
        }
    }

    void display() {
        int k = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (k < num && i == ele[k].i && j == ele[k].j) {
                    cout << ele[k++].x << " ";
                } else {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
    
    Sparse add(const Sparse& s1, const Sparse& s2)
{
    if (s1.n != s2.n || s1.m != s2.m)
    {
        cerr << "Matrices dimensions do not match." << endl;
        return Sparse(); // Return a default constructed Sparse object
    }

    Sparse sum(s1.m, s1.n, s1.num + s2.num);
    int i = 0, j = 0, k = 0;

    sum.ele = new Element[s1.num + s2.num]; // Allocate space for the sum of elements

    while (i < s1.num && j < s2.num)
    {
        if (s1.ele[i].i < s2.ele[j].i)
            sum.ele[k++] = s1.ele[i++];
        else if (s1.ele[i].i > s2.ele[j].i)
            sum.ele[k++] = s2.ele[j++];
        else
        {
            if (s1.ele[i].j < s2.ele[j].j)
                sum.ele[k++] = s1.ele[i++];
            else if (s1.ele[i].j > s2.ele[j].j)
                sum.ele[k++] = s2.ele[j++];
            else
            {
                sum.ele[k] = s1.ele[i];
                sum.ele[k++].x = s1.ele[i++].x + s2.ele[j++].x;
            }
        }
    }

    for (; i < s1.num; i++)
        sum.ele[k++] = s1.ele[i];
    for (; j < s2.num; j++)
        sum.ele[k++] = s2.ele[j];

    sum.num = k;

    return sum;
}
};

int main()
{
    int m,n,num;
    cout<<"Enter Dimensions for sparse matrix(row, column, non-zero elements)"<<endl;
    cin>>m>>n>>num;
    Sparse s(m,n,num);
    s.create();
    s.display();
    
    return 0;
}