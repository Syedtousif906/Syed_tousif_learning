#include<iostream>
int main()
{
class Base{
    public:
    int  x;

    void show()
    {
    std::cout<<x<<"\n";
    std::cout<<"I am under Base class\n";
    }

};

class Derived : public Base
    {
    public:
    int y;
    void display()
    {
        std::cout<<y<<"\n";
        std::cout<<"I am under Derived class\n";
    }
    };
Derived d;
d.x=10;
d.y=15;
d.show();
d.display();

}

