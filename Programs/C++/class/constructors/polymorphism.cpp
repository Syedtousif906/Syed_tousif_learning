#include<iostream>
int main()
{

    class Car
    {
        public:
        virtual void start()=0;//pure virtual function
        virtual void stop()=0;

    
    };

    class Innova:public Car
    {
        public :
        void start()
        {
            std::cout << "Innova car Started\n";
        }
        void stop()
        {
            std::cout<<"Innova car stopped\n";
        }
    };

    class Swift:public Car
    {
        public :
        void start()
        {
            std::cout << "Swift car Started\n";
        }
        void stop()
        {
            std::cout<<"Swift car stopped\n";
        }
    };   

    Car *p=new Innova();
    p->start();
    p->stop();
    p=new Swift();
    p->start();
    p->stop();
}