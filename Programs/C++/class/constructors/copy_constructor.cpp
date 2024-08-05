#include <iostream>
int main()
{

    class Rectangle
    {
        private:
        int length;
        int breadth;
        public :
        Rectangle(int l,int b)
        {
            this->length= l;
            this->breadth=b;
            std::cout << this->length<<"\n";
            std::cout << this->breadth<<"\n";
            std::cout << " I am under class\n";
        }

        Rectangle(Rectangle &rec)
        {
            this->length= rec.length;
            this->breadth=rec.breadth; 
            std::cout << this->length<<"\n";
            std::cout << this->breadth<<"\n";
            std::cout << " I am under class copy constructor\n";  
        }

    };

    Rectangle rec(1,2);
    Rectangle r2(rec);
}