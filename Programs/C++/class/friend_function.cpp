#include<iostream>
void func();

class test
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    friend void func();
};

void func()
{
    test t;
    t.a = 12;
    t.b = 15;
    t.c = 10;
    std::cout << "Inside func - a: " << t.a << ", b: " << t.b << ", c: " << t.c << std::endl;
}

int main()
{
    test c;
    c.c = 10;
    std::cout << "Inside main - c: " << c.c << std::endl;

    // Calling the friend function
    func();
}
