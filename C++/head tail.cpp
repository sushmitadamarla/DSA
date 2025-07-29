#include <iostream>
#include<stdio.h>

using namespace std;

int func(int n)
{
    static int x=0;
    if (n>0)
    {
        x++;
      return func(n-1)+x;
    }
}


int main()
{
   int a=10;
   printf("%d",func(a));
    return 0;
}
