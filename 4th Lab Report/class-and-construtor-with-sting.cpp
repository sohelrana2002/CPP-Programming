// DIFFERNT TYPE OF CONSTRUCTOR IN NAMED CLASS
#include <iostream>
using namespace std;

class named
{
    string there;

public:
    named()
    {
        there = "unknown";
    }
    named(string x)
    {
        there = x;
    }
    string showName()
    {
        return there;
    }
};

int main()
{
    named z, z1("SOHEL");
    cout << "Your Name Is " << z.showName() << endl;
    cout << "Your Name Is " << z1.showName() << endl;
}
