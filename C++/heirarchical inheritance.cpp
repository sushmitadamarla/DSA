#include <iostream>

using namespace std;

class Animal
{
public:
    void info()
    {
        cout<<"I am an Animal"<<endl;
    }
};

class Dog:public Animal
{
public:
    void bark()
    {
        cout<<"Class Dog"<<endl;
        cout<<"I am a Dog. Woof Woof"<<endl;
    }
};

class Cat:public Animal
{
public:
    void meow()
    {
        cout<<"Class Cat"<<endl;
        cout<<"I am a cat. Meow Meow"<<endl;
    }
};

int main()
{
    Dog d;
    d.info();
    d.bark();
    Cat c;
    c.info();
    c.meow();

    return 0;
}
