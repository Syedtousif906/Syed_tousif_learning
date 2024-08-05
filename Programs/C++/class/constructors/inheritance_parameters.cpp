#include<iostream>
int main()
{
class Base{
    public:
    int  x;

    void show(int a,int b)
    {
    std::cout<<a<<"\n";
    std::cout<<b<<"\n";
    std::cout<<x<<"\n";
    std::cout<<"I am under Base class\n";
    }

};

class Derived : public Base
    {
    public:
    int y;
    void display(int c,int d)
    {
        std::cout<<c<<"\n";
        std::cout<<d<<"\n";
        std::cout<<y<<"\n";
        std::cout<<"I am under Derived class\n";
    }
    };
Derived d;
d.x=10;
d.y=15;
d.show(1,2);
d.display(2,4);

}

