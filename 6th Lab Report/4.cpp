/*====write a c++ program that contains a class A, A has one protected data member p and a member function set_p() to initialize p another calss B that would inherite class A in protected mode B has on public data member q and two member functions set_q() for initilaize q and sum() for showing sumation of p and q ====*/

#include <iostream>
using namespace std;

class A
{
protected:
    int p;

public:
    void set_p(int x)
    {
        p = x;
    }
};

class B : protected A
{
public:
    int q;
    void set_q(int y)
    {
        q = y;
    }
    void sum()
    {
        int n;
        cout << "Enter your Value of P = ";
        cin >> n;
        set_p(n);
        int s = p + q;
        cout << "Summation of p and q : " << s << endl;
    }
};

int main()
{
    int m;
    cout << "Enter your Value of Q = ";
    cin >> m;
    B obj1;
    obj1.set_q(m);
    obj1.sum();
}