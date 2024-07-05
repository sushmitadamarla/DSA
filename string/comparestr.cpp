#include<iostream>

using namespace std;

int main()
{
    char A[] = "painter";
    char B[] = "painting";
    int i,j;

    for(i=0,j=0; A[i]!='\0', B[j]!='\0'; i++,j++)
    {
       if(A[i]!=B[j])
       cout<<"They are not equal"<<endl;
       break;
    }

     if(A[i]=='\0' && B[j]=='\0')
        cout<<"Both Strings are equal";

        else if(A[i]<B[j])
        cout<<A<<" Is small";

        else
        cout<<A<<" Is greater";

        return 0;
}