#include<iostream>
//#include <cstdio>
//using namespace std;
int main()
{
    int var1 = 0;
    int var2 = 0;
    int const *p= &var1;
    std::cout<<*p<<"\n";
    printf("Hi this is printf function\n");
    p=&var2;
   // *p=2;
    std::cout<<*p<<"\n";
    std::cout<<p<<"\n";
} 