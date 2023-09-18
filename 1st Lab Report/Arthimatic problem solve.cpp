//Arthimatic problem solve
#include <iostream>
using namespace std;

class arthimatic
{

public:
    void sum(int a, int b)
    {
        cout << "sum: " << a + b << endl;
    }
};

int main()
{
    int x, y;
    cin >> x >> y;
    arthimatic a;
    a.sum(x, y);
}
