#include<iostream>

using namespace std;

int main(){
    char A[] = "hello";
    int i,j;
    int last_duplicate=0;
    int n = sizeof(A)/sizeof(A[0]);

    for(int i=0;i<n;i++)
    {
        if(A[i]!=A[i-1] && A[i]!=last_duplicate)
        {
            cout<<" "<<A[i];
        }

        last_duplicate = A[i];
    }   
    return 0;
}