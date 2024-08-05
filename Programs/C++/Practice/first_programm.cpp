// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    std::cout << "Dynamic memory allocation\n";

    int A[5] = {1,2,3,4,5};
    int *p=new int[5];
    p[2]=4;
    std::cout <<p[2]<<"\n";
    delete[]p;

    return 0;
}