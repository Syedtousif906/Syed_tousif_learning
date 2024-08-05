#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> test {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    cout<<test[1][1]<<"\n";
    cout<<test.at(2).at(1)<<"\n";
}