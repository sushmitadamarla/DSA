#include<iostream>
#include<cstring>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class Stack
{
    private:
    Node *top;
    public:
    Stack()
    {top = NULL;}

    void push(int x)
    {
        Node *t = new Node;
        if(t == NULL)
        cout<<"Stack is full"<<endl;
        else
        {
            t->data = x;
            t->next = top;
            top = t;
        }
    }

    int pop()
    {
        int x = -1;
        if(top == NULL)
        cout<<"Stack is empty"<<endl;
        else
        {
            x = top->data;
            Node *t = top;
            top = top->next;
            delete t;
        }
        return x;
    }

    void display()
    {
        Node *p;
        p = top;
        while(p!=NULL)
        {
            cout<<p->data<<"->"<<" ";
            p = p->next;
        }
        cout<<endl;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    int isBalanced(char *exp)
    {
        int i;
        for(i=0;exp[i]!='\0';i++)
        {
        if(exp[i] == '(')
        push(exp[i]);
        else if(exp[i] == ')')
        {
            if(top == NULL)
            return 0;
            pop();
        }
        }
        if(top == NULL)
        return 1;
        else 
        return 0;
    }

    int pre(char x)
    {
        if(x == '+' || x == '-')
        return 1;
        else if(x == '*' || x == '/')
        return 2;

        else 
        return 0;
    }

    int isOperand(char x)
    {
        if(x ==' +'|| x == '-' || x == '*' || x == '/')
        return 0;

        else 
        return 1;
    }

    char *IntoPost(char *infix)
    {
        int i=0, j=0;
        char *postfix;
        int len = strlen(infix);
        char *postfix = new char[len + 1];

        while(infix!='\0')
        {
            if(isOperand(infix[i]))
            postfix[j++] = infix[i++];
            else
            {
                if(pre(infix[i])>pre(top->data))
                push(infix[i++]);
                else
                postfix[j++] = pop();
            }
        }

       while (!isEmpty())
            postfix[j++] = pop();

        postfix[j] = '\0';
        return postfix;

    }

     int Eval(char *postfix)
    {
        int i = 0;
        int x1, x2, r;

        for (i = 0; postfix[i] != '\0'; i++)
        {
            if (isOperand(postfix[i]))
            {
                push(postfix[i] - '0'); // Convert char to int and push
            }
            else
            {
                x2 = pop();
                x1 = pop();
                switch (postfix[i])
                {
                    case '+':
                        r = x1 + x2;
                        break;

                    case '-':
                        r = x1 - x2;
                        break;

                    case '*':
                        r = x1 * x2;
                        break;

                    case '/':
                        r = x1 / x2;
                        break;
                }
                push(r); // Push result back to stack
            }
        }
        return pop(); // Final result
    }
};

int main()
{
    Stack st;
   /* st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();

    st.pop();
    st.display();

    //char exp[] = "((a+b)*(c-d))";
    //cout<<"Is exp balanced? "<<st.isBalanced(exp)<<endl;


    st.push('(');
    st.push('a');
    st.push('+');
    st.push('b');
    st.push(')');
    st.push('*');
    st.push('(');
    st.push('c');
    st.push('-');
    st.push('d');
    st.push(')');

    st.display();

    st.pop();
    st.display();

    char exp[] = "((a+b)*(c-d))";
    cout << "Is exp balanced? " << (st.isBalanced(exp) ? "Yes" : "No") << endl;

    char infix[] = "a+b*c-d";
    char *postfix = st.IntoPost(infix);
    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << postfix << endl;

    delete[] postfix;*/

    char *postfix = "234*+82/-";
    cout<<"Result is"<<st.Eval(postfix);
    return 0;
}