#include <iostream>

using namespace std;

int main()
{
    int A[10]={0};
    //A[0]=1;A[1]=3;A[2]=5;A[3]=7;A[4]=9;
    int i;

    for (i=0;i<10;i++)
    {
       printf("%d\n",A[i]);
       //printf("%d\n",A[i]);


    }
    cout<<sizeof(A)<<endl;
    return 0;
}
