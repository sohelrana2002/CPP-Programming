// problem name: write a program to print three value and sum of three value (using virtual base class)

#include<iostream>
using namespace std;

class A
{
    public:
        int a;
};

class B: virtual public A
{
    public:
        int b;
};
class C: virtual public A
{
    public:
        int c;
};

class D: public B, public C
{
    public:
        int sum;
};

int main()
{
    D obj1;
    obj1.a = 5;
    obj1.b = 10;
    obj1.c = 15;
    obj1.sum = obj1.a + obj1.b + obj1.c;
    cout << "value of a is: " <<obj1.a <<endl;
    cout << "value of b is: " <<obj1.b <<endl;
    cout << "value of c is: " <<obj1.c <<endl;
    cout << "sum is: " <<obj1.sum <<endl;
}