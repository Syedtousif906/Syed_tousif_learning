#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> test {1,2,3,4,5,6};
    vector <int> test_1(5,20);// 5 element initialized to 20
    cout<<test[1]<<"\n";
    cout<<test.at(2)<<"\n";
    cout<<"size of 1st = "<<sizeof(test)<<test.size()<<"\n";
    test.push_back(20);
    cout<<"size of 2nd = "<<sizeof(test)<<test.size()<<"\n";
    test.push_back(30);
    cout<<"size of 3rd = "<<sizeof(test)<<test.size()<<"\n";
    cout<<test.at(6)<<"\n";
    cout<<test.at(7)<<"\n";
   // cout<<test.at(8)<<"\n";

    cout<<test_1.at(1)<<"\n";
    cout<<test_1.at(0)<<"\n";

}