#include<iostream>
int main()
{
class Base{
    public:
    int  x=2;
    Base()
    {
        std::cout<<"I am under Base Class Constructor\n";
    }
    Base(int x)
    {
        std::cout<<"I am under Base Class Param Constructor\n"<< x;
    }
    void show(int a,int b)
    {
    std::cout<<a<<"\n";
    std::cout<<b<<"\n";
    std::cout<<x<<"\n";
    std::cout<<"I am under Base class show function\n";
    }

};

class Derived : public Base
    {
    public:
    int y=2;

    Derived()
    {
        std::cout<<"I am under Derived Class Constructor\n";
    }
    Derived(int y)
    {
        std::cout<<"I am under Derived Class Param Constructor\n"<<y;
    }

    void display(int c,int d)
    {
        std::cout<<c<<"\n";
        std::cout<<d<<"\n";
        std::cout<<y<<"\n";
        std::cout<<"I am under Derived class display function\n";
    }
    };
/*Derived d;
d.x=10;
d.y=15;
d.show(1,2);
d.display(2,4);
*/
//Derived b(2);
Base *p= new Derived();
p->show(2,3);

}

