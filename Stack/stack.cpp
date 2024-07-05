#include<iostream>
using namespace std;

class Stack
{
    private:
    int size;
    int top;
    int *s;

    public:

    Stack(int size) 
    {
        this->size = size;
        top = -1;
        s = new int[size];
    }

    ~Stack()
    {
        delete[] s;
    }

    void push(int value)
    {
        if(top == size-1)
        {cout<<"Stack overflow";}
        else
        s[++top] = value;
    }

    int pop()
    {
        if(top == -1)
        {
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        else
        return s[top--];
    }

    int peek(int index)
    {
        if(index<0 || index>top)
        {
            cout<<"Index invalid!"<<endl;
            return -1;
        }
        else
        {return s[top-index];}
    }

    void display()
    {
        for(int i=top;i>=0;i--)
        cout<<s[i]<<endl;
    }

    int isEmpty()
    {
        if(top == -1)
        return 1;
        else
        return 0;
    }

    int isFull()
    {
        return top == size-1;
    }
};

int main()
{
    int size;
    int index;
    cout<<"Enter size of stack"<<endl;
    cin>>size;

    Stack st(size);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<"Stack element:"<<endl;
    st.display();

    cout<<"Popped element"<<st.pop()<<endl;

    cout<<"Stack elements after pop"<<endl;
    st.display();

    cout<<"Enter index"<<endl;
    cin>>index;

    cout<<"Element at index "<<index<<" is "<<st.peek(index)<<endl;

    cout<<"Is stack empty?"<<st.isEmpty()<<endl;
    cout<<"Is stack full?"<<st.isFull()<<endl;

    return 0;
}