// Online C++ compiler to run C++ program online
#include <iostream>
int add(int,int);
int sub(int,int);
int main() {
    // Write C++ code here
    std::cout << "Dynamic memory allocation\n";
    int a=30;
    int b=20;
    int (*fun)(int ,int);
    fun=add;
    int p =(*fun)(a,b);
    fun=sub;
    int q =(*fun)(a,b);
    std::cout <<p<<"\n";
    std::cout <<q<<"\n";
    return 0;
}

int add(int a,int b)
{
    return (a+b);
}

int sub(int a,int b)
{
    return (a-b);
}