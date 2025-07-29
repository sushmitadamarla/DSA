#include <iostream>

using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1;

    cout<<"Name of person is:"<<endl;
    //cin.get(p1.name,50);
    cin>>p1.name;
    cout<<"Age:"<<endl;
    cin>>p1.age;
    cout<<"Salary:"<<endl;
    cin>>p1.salary;


    cout<<"\nDisplaying information"<<endl;
    cout<<"Name:"<<p1.name<<endl;
    cout<<"Age:"<<p1.age<<endl;
    cout<<"Salary:"<<p1.salary<<endl;

    return 0;
}
