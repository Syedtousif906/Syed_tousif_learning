#include<iostream>
#include<string>
using namespace std;
int main()
{

class Car
{
    public:
    Car()
    {
        cout<<" I am in constructor\n";
    }
};

class Innova:public Car
{
    public:
    Innova()
    {
        cout<<" I am inside Innova class\n";
    }
};

class Swift:public Car
{
    public:
    Swift()
    {
        cout<<" I am inside Swift class\n";
    }
};

//Car object;
Innova innova_1;
Swift swift_1;
}