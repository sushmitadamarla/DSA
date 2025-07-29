#include <iostream>

using namespace std;

int main()
{
    int *p,*q;
    int i;
    p= new int[5];
    p[0]=5;p[1]=6;p[2]=7;p[3]=8;
    p[4]=9;


      q[i]=p[i];
      delete []p;
      p=q;
      q=NULL;

    for(i=0;i<5;i++)
    {
        printf("%d \n",p[i]);
    }

    return 0;
}
