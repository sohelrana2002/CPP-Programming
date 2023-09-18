// Constructor-in-derived-class

#include <iostream>
using namespace std;

class alpha
{
    int x;

public:
    alpha(int i)
    {
        x = i;
        cout << "alpha initialized\n";
    }
    void showX()
    {
        cout << "x: " << x << endl;
    }
};

class beta
{
    float y;

public:
    beta(float j)
    {
        y = j;
        cout << "beta is initialized\n";
    }
    void showY()
    {
        cout << "y: " << y << endl;
    }
};

class gama : public beta, public alpha
{
    int m, n;

public:
    gama(int a, float b, int c, int d) : alpha(a), beta(b)
    {
        m = c;
        n = d;
        cout << "gama is initialized\n";
    }

    void showMN()
    {
        cout << "M: " << m <<"\nN: "<<n << endl;
    }
};

int main()
{
    gama obj1(5, 10.5, 20, 30);
    obj1.showX();
    obj1.showY();
    obj1.showMN();
}