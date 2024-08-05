#include<iostream>
#include<string>
using namespace std;
int main()

{


    class Car{
        public :
        int name;
        int age;
        Car(int name_1,int age_1)
        :name{name_1},age{age_1}
        {
            cout<<"I am in constructor\n";
            cout<<name<<" "<<age<<"\n";
        }
    };

 Car innova(40,50);

}
