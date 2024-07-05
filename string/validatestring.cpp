#include<iostream>
using namespace std;

int validate(char *name)
{
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if((name[i]>=65 && name[i]<=90) || (name[i]>=97 && name[i]<=122) || (name[i]>=48 && name[i]<=57))
        {
           continue;
        }
        else{
             return 1;
        }
    }
    return 0;
}

int main()
{
    char name[] = {"anil123\0"};
    if (validate(name))
    {
        cout<<"Invaild characters"<<endl;
    }
    else{
        cout<<"valid characters"<<endl;
    }
    return 0;
}