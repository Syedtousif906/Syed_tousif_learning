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
    virtual void start()=0;


    virtual void stop()=0;
};

class Innova:public Car
{
    public:
    Innova()
    {
        cout<<" I am inside Innova class\n";
    }
    void start()
    {
        cout<<" Innova Started\n";
    }

    void stop()
    {
        cout<<" Innova stop\n";
    }
};

class Swift:public Car
{
    public:
    Swift()
    {
        cout<<" I am inside Swift class\n";
    }

    void start()
    {
        cout<<" Swift Started\n";
    }

    void stop()
    {
        cout<<" Swift stop\n";
    }
};

Car *object = new Innova();
object->start();
}