#include<iostream>
int main()
{
    class Parent
    {
    public :
    virtual void display()
    {
        std::cout<<"I am under parent class\n";
    }
    };
    
    class Child:public Parent
    {
    public :
    void display()
    {
        std::cout<<"I am under child class\n";
    }
    };
Parent *p =new Child();
p->display();
}