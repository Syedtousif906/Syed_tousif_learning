// Online C++ compiler to run C++ program online
#include <iostream>
int add(int,int,int);
int add(int,int);
float add(float,float);
int main() {
    // Write C++ code here
    std::cout << "Dynamic memory allocation\n";

    int a = 3;
    int b = 5;
    int c = 15;
    float d =1.5;
    float e = 4.7;
    int p = add(a,b);
    int q = add(a,b,c);
    float r = add(d,e);
    std::cout <<p<< " "<<q<<" " << r<<"\n";

    return 0;
}

int add(int a, int b, int c)
{
    return(a+b+c);
}

int add(int a, int b)
{
    return (a+b);
}

float add(float a, float b)
{
    return (a+b);
}