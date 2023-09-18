#include <iostream>
using namespace std;

class FunctionOverloading
{
    public:
        void sum(int a, int b)
        {
            cout <<"Sum Of Interger Value: " << a+b <<endl;
        }
        void sum(double a, int b)
        {
            cout <<"Sum Of Double type Value: " << a+b <<endl;
        }
        void sum(string x)
        {
            cout << x <<endl;
        }
};

int main()
{
    FunctionOverloading obj1;
    obj1.sum(5, 10);
    obj1.sum(10.5, 5);
    obj1.sum("I'm a string value");

    return 0;
}