// constructor-overloding-example

#include <iostream>
using namespace std;
class cpy
{
    int var, fact, real;

    public:
        cpy(int temp)
        {
            var = temp;
        }
        cpy()
        {
            var = 2;
        }
        cpy(int a, int b)
        {
            fact = a;
            real = b;
        }
        void calculate()
        {
            cout << var << endl;
        }
        void calculate1()
        {
            cout << fact + real;
        }
};

int main()
{
    int n, m;
    cout << "Enter the Number : ";
    cin >> n >> m;
    cpy obj;
    cpy obj1(n);
    cpy obj2(n, m);
    obj.calculate();
    obj1.calculate();
    obj2.calculate1();
    return 0;
}
