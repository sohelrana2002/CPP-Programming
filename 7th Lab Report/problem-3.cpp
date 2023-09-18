// problem name: write a program to find length * breadth * height of a box (using hybrid inheritence)

#include <iostream>
using namespace std;

class A
{
    protected:
        int length;
    public:
        void setLength()
        {
            cout << "Enter length: ";
            cin >> length;
        }
};

class B: public A
{
    protected:
        int breadth, m;
    public:
        void getLandB()
        {
            setLength();
            cout << "Enter breadth";
            cin >> breadth;
            m = length * breadth;
        }
};

class C
{
    protected:
        int height;
    public:
        void setHeight()
        {
            cout << "Enter height: ";
            cin >> height;
        }
};

class D: public B, public C
{
        
    public:
        void mainResult()
        {
            getLandB();
            setHeight();
            int result = m * height;
            cout << "Multiplication of length, breadth and height is: " <<result;
        }
};

int main()
{
    D obj1;
    obj1.mainResult();
}
